# How to setup the environment for seamless integration of C++ and Python using Pybind11

There are three main methods to do:
1. Using CMake
2. Using MSVC
3. Using MSYS2/MinGW64

Here, we will follow the second method of using Visual Studio MSVC.

Here are the steps to follow:

1. Create the required C++ file
2. We will use setuptools from Python which can be used to setup C++ files and create a `.pyd` file
3. The prerequisite for step 2 is to create/activate a virtual environment by:
    - Open `x64 Native Tools Command Prompt for VS 2022`. If not installed, go to <https://visualstudio.microsoft.com/downloads/?q=build+tools> and install "Build tools for Visual Studio" or "Visual Studio IDE" if you wish.
    - cd the project folder. If the project folder is located on a different drive, then cd command should be `cd /d "D:\path\to\your\project"`
    - Use this command to create a virtual environment `python -m venv .venv`. Skip this step if already created
    - Activate your venv using this command `.\.venv\Scripts\activate`
    - Install pybind11 `python -m pip install pybind11`. Skip if already installed.
4. Compile your c++ file into `.pyd` using setup.py using this `python setup.py build_ext --inplace`
5. Atlast it will create an .pyd file which you can use it as a custom python library.
