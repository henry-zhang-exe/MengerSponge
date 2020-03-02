# Getting Started

## What is different

Most part of this file is the same as the ray-tracer project.
Differences are listed below:

* Dependencies
	- We do not depend on FLTK anymore, but GLEW and GLFW are essential
	  now.
* How to add your files
	- Simplified the description and remove the example unrelated to this
	  project.
* libutgraphicsutil.so
	- This project depends on libutgraphicsutil.so to run. Please do not
	  move it to somewhere else because we use rpath to specify the
	  location of the library with absolute path. At the same time, you
	  also do not need to change your LD_LIBRARY_PATH.

## Build

Assume the present working directory (PWD) is under the root directory of this
project. The following commands will create a directory named as "build" and
build the starter code within this directory.

```
mkdir build
cd build
cmake ..
make -j8
```

When finished, the binary called ray will be placed at build/bin/ directory.

You can change build to any name you like, although "build" is the most
commonly used one.

NOTE: It is recommended to use this build scheme (called out-of-source build).
Besides the advantages listed [here]
(http://voices.canonical.com/jussi.pakkanen/2013/04/16/why-you-should-consider-using-separate-build-directories/),
a more practical reason is we did not test in-source building at all.

## Dependencies

The starter code depends on GLEW, GLFW, and certainly, the OpenGL to run.

UTCS UNIX hosts already have them installed. For your own system you may need
to install them through the corresponding package manager. If you are using OS
X, [Homebrew](http://brew.sh/) is recommended.

## How to add your file

In most cases you do not need to modify the build system manually to add new
files. The build system will automatically add source files under the
following directories to your project.

	src/

However, since EVERY source file in these directories will be added to the
project to build, it is not a good practice to add random source files, say a
"Hello World" program, under these directories also, which will cause linking
errors due to multiple main functions.

On the other hand, all files out of these directories will NOT be added to the
project automatically. 

## Tools that help you read the code

This starter code includes many features and lots of files, and usually it is
troublesome to jump over these files. For these cases, a source indexer helps
you a lot.

[cscope](http://cscope.sourceforge.net/) and [rtags](http://www.rtags.net/)
are two recommended ones. Cscope is included in most distributions, while
rtags requires build from source. However rtags understands C++ precisely
because it uses the Clang compiler fronted.

## Some notes about the compiler

On 3rd floor lab machines, the g++-5.2.0 will be used (located at
/lusr/opt/gcc-5.2.0/bin/g++). Otherwise the default C++ compiler is used.

C++11 is enabled by default.

## Some notes about glm

We disabled the member function 'length()' for all vector types to avoid
confusion, which returns the number of elements in a vector object, rather than
the norm of the vector. If you really want to get the number of elements in
the vector object, use 'size()' instead.

The build system will clone the 0.9.7.6 version from the official repository
if glm does not present. Otherwise, the glm installed by the system (may be
older) will be used.

# Acknowledgement 

This starter code is modified based on the bunny and menger project written by
Randall Smith for 2015 Spring Graphics Course.
