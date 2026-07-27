# libreproc - Cross-platform C99 process library

This is a `build2` package for the
[`reproc`](https://github.com/DaanDeMeyer/reproc) C99 library. It provides a
cross-platform API for starting, stopping, and communicating with external
programs.


## Usage

To start using `libreproc` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libreproc ^14.2.7
```

Then import the library in your `buildfile`:

```
import libs = libreproc%lib{reproc}
```


## Importable targets

This package provides the following importable targets:

```
lib{reproc}
```

The C99 process library.


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libreproc.multithreaded ?= true
```

When true (the default, matching upstream `REPROC_MULTITHREADED`), the library
uses `pthread_sigmask` and links the system thread library on POSIX. When
false, it uses `sigprocmask` instead and does not link `-pthread`.
