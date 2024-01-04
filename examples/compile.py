import os
import pathlib
import subprocess

BASE_DIR = pathlib.Path(__file__).resolve().parent.parent

def main():
    cwd = pathlib.Path(os.getcwd()).resolve()

    if cwd.parent != BASE_DIR:
        return 1

    build_dir = cwd / 'build'
    if not build_dir.exists():
        subprocess.run(['meson', 'setup', '--buildtype', 'plain', 'build'])

    subprocess.run(['meson', 'compile', '-C', 'build'])

    return 0
