# udp-capture
A tool to capture incoming high-rate, unidirectional UDP streams to a file or pipe, preserving message boundaries

## C++ Starter

The C++ Starter is a [GitHub repository template](https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-repository-from-a-template) that provides a minimalistic boilerplate to kickstart your [C++](https://isocpp.org) project. This template offers a streamlined foundation, complete with predefined file structures, essential tools, and recommended settings, ensuring a swift and efficient start to your C++ development journey.

## Key Features

- Utilizes [CMake](https://cmake.org/) as the build system generator.
- Integrates [CPM.cmake](https://github.com/cpm-cmake/CPM.cmake/) for efficient package management.
- Incorporates [Catch2](https://github.com/catchorg/Catch2) as the testing framework.
- Enforces consistent code formatting through [Format.cmake](https://github.com/TheLartians/Format.cmake).
- Implements static analysis by enabling warnings using [CheckWarning.cmake](https://github.com/threeal/CheckWarning.cmake/).
- Comes with a preconfigured [GitHub Actions](https://github.com/features/actions) workflow for continuous integration.
- Supports automatic dependency updates through [Dependabot](https://docs.github.com/en/code-security/dependabot) in GitHub Actions.

## Usage

Refer to [this wiki](https://github.com/threeal/cpp-starter/wiki) for information on how to use this template.


# Notes

## Pre requisites
sudo apt install crossbuild-essential-arm64

## Installing boost for cross compiling see comments in install-boost.sh


## for CMAKE optionally use 
-DBOOST_ROOT=$HOME/.local/arm64-devenv/boost_arm64_install/ \
-DBoost_SYSTEM_LIBRARY=$HOME/.local/arm64-devenv/boost_arm64_install/lib/libboost_system.a \

## Command line 
Initial command line with explicit pointers to boost local
 cmake -S . -B build/linux/aarch64-gnu/debug -D CMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=./platforms/linux/aarch64-gnu.toolchain.cmake  -DCMAKE_PREFIX_PATH=$HOME/.local/lib/cmake/Boost-1.84.0 -DCMAKE_FIND_ROOT_PATH=$HOME/.local/lib/cmake/Boost-1.84.0

 ## Target directory structure
 settings.json defines "-" separated long name 
 scripts above define a directory hiearchy