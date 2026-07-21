# cpp02

A C++ module focused on operator overloading, canonical class form, and deeper object-oriented design practice.

## Overview

This repository contains exercises that reinforce intermediate C++ concepts through practical class implementations. Typical topics in this module include:

- Orthodox Canonical Form (constructor, copy constructor, copy assignment operator, destructor)
- Operator overloading
- Fixed-point number representation (common in this module)
- Encapsulation and clean class interfaces
- Code organization using header/source separation

## Repository Structure

Exercises are typically organized in folders such as:

- `ex00/`
- `ex01/`
- `ex02/`
- `...`

Each exercise generally includes:

- `*.hpp` header files
- `*.cpp` implementation files
- `Makefile`

## Build

Build each exercise independently from its directory:

```bash
cd ex00
make
```

Common Makefile targets:

- `make` or `make all` — build the executable
- `make clean` — remove object files
- `make fclean` — remove object files and executable
- `make re` — rebuild from scratch

## Run

After compilation, run the generated executable (name depends on the exercise):

```bash
./<executable_name>
```

## Learning Goals

- Implement canonical class behavior correctly
- Overload operators safely and intuitively
- Strengthen understanding of value semantics and copying
- Write reusable, readable, and maintainable C++ code
- Improve confidence with multi-file C++ project structure

## Requirements

- C++ compiler (`c++`, `g++`, or `clang++`)
- `make`

## Notes

- Follow each exercise subject's required output and constraints.
- Keep class methods small and focused.
- Test edge cases, especially around copy/assignment and arithmetic behavior.
