# libreprocxx - C++11 wrapper for the reproc process library

This is a `build2` package for the
[`reproc++`](https://github.com/DaanDeMeyer/reproc) C++11 wrapper library. It
adapts the `reproc` C API to an idiomatic C++ interface and depends on
`libreproc`.


## Usage

To start using `libreprocxx` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libreprocxx ^14.2.7
```

Then import the library in your `buildfile`:

```
import libs = libreprocxx%lib{reproc++}
```


## Importable targets

This package provides the following importable targets:

```
lib{reproc++}
```

The C++11 `reproc` wrapper library.


## Configuration variables

This package has no configuration variables.
