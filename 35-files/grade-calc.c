#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))

typedef struct assessment {
    double weight;
    double grade;
    double total;
} assessment_t;

void initializeAssessments(assessment_t labs[], const int labsLength,
                           assessment_t *midterm, assessment_t *final) {
    /* Weights */
    for (int i = 0; i < labsLength; ++i) {
        if (i < 3)      { labs[i].weight = 2.0; }
        else if (i < 6) { labs[i].weight = 3.0; }
        else            { labs[i].weight = 5.0; }
    }
    midterm->weight = 30.0;
    final->weight = 40.0;
    /* Totals */
    for (int i = 0; i < labsLength; ++i) {
        labs[i].total = 10.0;
    }
    midterm->total = 75.0;
}

void readGrades(assessment_t labs[], const int labsLength,
                assessment_t *midterm) {
    FILE *file = fopen("grades.txt", "r");
    if (file == NULL) {
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (1) {
        char *s = NULL;
        size_t size = 0;
        ssize_t bytes_written = getline(&s, &size, file);
        if (bytes_written < 0) {
            free(s);
            break;
        }
        if (s[bytes_written - 1] == '\n') {
            /* Replace the newline with a null byte */
            s[bytes_written - 1] = '\0';
        }
        else {
            printf("file does not end with a newline\n");
            exit(EXIT_FAILURE);
        }
        if (i < labsLength) {
            labs[i].grade = atof(s);
        }
        else if (i == labsLength) {
            midterm->grade = atof(s);
        }
        else {
            printf("file has too many lines\n");
            exit(EXIT_FAILURE);
        }
        ++i;
        free(s);
    }
    if (i != labsLength + 1) {
        printf("file has too few lines\n");
        exit(EXIT_FAILURE);
    }
    fclose(file);
}

double calculatePercentage(assessment_t *assessment) {
    return assessment->weight * assessment->grade / assessment->total;
}

void calculateCourseGrade(assessment_t labs[], const int labsLength,
                          assessment_t *midterm, assessment_t *final) {
    double coursePercentage = 0.0;
    for (int i = 0; i < labsLength; ++i) {
        if (labs[i].grade >= 0.0) {
            coursePercentage += calculatePercentage(&labs[i]);
        }
        else {
            final->weight += labs[i].weight;
        }
    }
    coursePercentage += calculatePercentage(midterm);
    double courseWeightWithoutFinal = 100.0 - final->weight;
    printf("Current grade: %.1lf%%\n", 100.0 * coursePercentage / courseWeightWithoutFinal);
    printf("  Lowest possible grade: %.1lf%%\n", coursePercentage);
    printf("  Highest possible grade: %.1lf%%\n", coursePercentage + final->weight);

    double targets[] = {
        50.0,
        60.0,
        75.0,
        80.0,
        85.0,
    };
    int targetsLength = ARRAY_LENGTH(targets);
    printf("\nTargets:\n");
    for (int i = 0; i < targetsLength; ++i) {
        printf("  %.1lf%% ", targets[i]);
        if (targets[i] <= coursePercentage) {
            printf("doesn't need the final");
        }
        else if (targets[i] > (coursePercentage + final->weight)) {
            printf("is impossible");
        }
        else {
            double finalPercentage = targets[i] - coursePercentage;
            printf("needs at least %.1lf%% on the final", 100.0 * finalPercentage / final->weight);
        }
        printf("\n");
    }
}

int main(void) {
    const int labsLength = 9;
    assessment_t labs[labsLength];
    assessment_t midterm;
    assessment_t final;

    initializeAssessments(labs, labsLength, &midterm, &final);
    readGrades(labs, labsLength, &midterm);
    calculateCourseGrade(labs, labsLength, &midterm, &final);
    return EXIT_SUCCESS;
}
