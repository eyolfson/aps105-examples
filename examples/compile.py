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
        os.environ['CC'] = 'clang'
        os.environ['CFLAGS'] = '-pipe'
        subprocess.run(['meson', 'setup', '--buildtype', 'debug', 'build'])

    subprocess.run(['meson', 'compile', '-C', 'build'])

    return 0
