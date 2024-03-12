#include <stdio.h>
#include <stdlib.h>

int hanoi(int disks, int from_rod, int to_rod, int spare_rod) {
    if (disks == 0) {
        return 0;
    }
    int steps = hanoi(disks - 1, from_rod, spare_rod, to_rod);
    printf("Move disk %d to rod %d\n", disks, to_rod);
    steps += 1;
    steps += hanoi(disks - 1, spare_rod, to_rod, from_rod);
    return steps;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return EXIT_FAILURE;
    }
    int disks = atoi(argv[1]);
    if (disks < 0) {
        return EXIT_FAILURE;
    }
    printf("%d disks: %d steps\n", disks, hanoi(disks, 1, 3, 2));
    return 0;
}
