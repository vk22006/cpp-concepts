# Cpp Concepts — C++ Examples & Mini-Projects

![License: MIT](https://img.shields.io/badge/License-MIT-lightgrey?style=for-the-badge)
![Languages: C++ & Python](https://img.shields.io/badge/Languages-C%2B%2B%20%7C%20Python-blue?style=for-the-badge)

> A curated collection of small C++ programs and demo projects exploring core language concepts, data structures, memory management, file I/O, multithreading, and FFI with Python. The repo is primarily C++ with a small amount of Python.

---

## Table of contents
- [About](#about)  
- [What's included](#whats-included)  
- [Quick start](#quick-start)  
  - [Build a single example (g++)](#build-a-single-example-g)  
  - [Build with CMake (recommended for larger folders)](#build-with-cmake-recommended-for-larger-folders)  
  - [Run Python examples](#run-python-examples)  
- [Folder overview](#folder-overview)  
- [Contributing](#contributing)  
- [License](#license)  

---

## About
This repository collects small, focused examples created while learning and practicing modern C++. Examples are intentionally compact and well-commented so you can run, tweak, and learn quickly.

---

## What's included
- Hands-on examples for OOP, data structures, file handling, memory management, multithreading, templates (in progress), and more.  
- Python helper scripts and FFI examples demonstrating C++ ↔ Python interoperability.

---

## Quick start

### Build a single example (g++)
Locate the `.cpp` file you want to run (for example `examples/foo.cpp`) and compile:

```bash
# compile
g++ -std=c++17 -O2 -Wall path/to/example.cpp -o example

# run
./example
````

Adjust `-std` to match the example (e.g., `-std=c++11`, `-std=c++17`) if required.

---

### Build with CMake (recommended for folders)

If a folder includes `CMakeLists.txt`, use CMake:

```bash
mkdir -p build && cd build
cmake ..
cmake --build .
# run binaries from build/
```

If no `CMakeLists.txt` exists, build examples individually with `g++` as shown above.

---

### Run Python examples

Some examples include Python utilities or FFI demos:

```bash
# run a Python script
python3 scripts/example.py

# if requirements provided
python3 -m pip install -r requirements.txt
python3 demo.py
```

---

## Folder overview

Typical folders in this repo:

* `basic-concepts` — syntax, I/O, control flow
* `oop-concepts` / `custom-header-class` — classes, headers
* `data-structures` — lists, stacks, queues, STL demos
* `memory-management` — pointers, RAII, smart pointers
* `file-handling` — file streams & parsing examples
* `multithreading` — threads, mutexes, concurrency examples
* `Cpp-foreign-function-interfaces` / `Cpp-Python-FFI-with-Pybind11` — FFI examples
* `README.md` — this file

Refer to each folder for its own notes and examples.

---

## Contributing

Contributions welcome — keep examples small, focused, and well-commented.

1. Fork the repo
2. Create a branch: `git checkout -b feature/<topic>`
3. Add your example(s) and a short README or comments
4. Commit, push, and open a Pull Request

---

## License

This project is **licensed under the MIT License** — see the [`LICENSE`](LICENSE) file for details.

