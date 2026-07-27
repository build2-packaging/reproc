# reproc

This is a `build2` package repository for
[`reproc`](https://github.com/DaanDeMeyer/reproc), a cross-platform C99/C++11
process library.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use these
packages in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](./libreproc/PACKAGE-README.md) files under each package
directory.

The development setup for `reproc` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/reproc.git
cd reproc

bdep init -C @gcc cc config.c=gcc config.cxx=g++
bdep update
bdep test
```
