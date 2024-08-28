# Numerical and Statistical Methods

This repository contains implementations of various numerical and statistical methods, essential for solving mathematical problems where analytical solutions are difficult or impossible to obtain. The methods implemented here are commonly used in engineering, computer science, and applied mathematics. 

## Table of Contents

- [Introduction](#introduction)
- [Repository Structure](#repository-structure)
- [Installation](#installation)
- [Methods Implemented](#methods-implemented)
  - [Errors in Numerical Methods](#errors-in-numerical-methods)
  - [Bisection Method](#bisection-method)
  - [Iteration Method](#iteration-method)
- [How to Use](#how-to-use)
- [Contributing](#contributing)

## Introduction

Numerical methods provide a way to approximate solutions to mathematical problems that cannot be solved analytically. This repository includes a collection of algorithms and methods to tackle such problems, ranging from finding roots of equations to understanding error propagation in numerical computations.

## Repository Structure

The repository is organized into the following directories:

- `errors/`: Contains code related to error analysis in numerical methods, including absolute, relative, and truncation errors.
- `bisection_method/`: Implements the Bisection Method, a simple and reliable root-finding algorithm.
- `iteration_method/`: Contains the implementation of the Iteration Method (e.g., Fixed-Point Iteration), another technique to find roots of equations.

Each directory contains:

- Source code files (`.c`, `.cpp`, `.py`, etc.).
- A `README.md` file explaining the specific method.
- Example inputs and outputs to demonstrate how the method works.

## Installation

To run the code provided in this repository, you'll need a C/C++/Python compiler or interpreter installed on your system. Follow these steps to get started:

1. **Clone the Repository**:
   ```bash
   https://github.com/AdityaSinghMandrawal/Numerical-and-Statistical-Methods
   cd Numerical-and-Statistical-Methods

2. **Navigate to the Specific Method Directory**:
   ```bash
   cd Bisection_method
   ```

3. **Compile and Run the Code**:
   - For C/C++:
     ```bash
     gcc Bisection_method.c -o Bisection_method
     ./Bisection_method
     ```
   - For Python:
     ```bash
     python Bisection_method.py
     ```

## Methods Implemented

### Errors in Numerical Methods

Error analysis is crucial in numerical computation. This section covers:

- **Absolute Error**: The difference between the exact value and the approximation.
- **Relative Error**: The absolute error normalized by the exact value.
- **Truncation Error**: The error made when an infinite process is approximated by a finite one.

### Bisection Method

The Bisection Method is a root-finding method that repeatedly divides an interval in half and selects the subinterval in which the root lies. It's simple and robust but can be slow.

- **Input**: A function, interval [a, b], and a tolerance level.
- **Output**: The approximate root of the function within the given tolerance.

### Iteration Method

The Iteration Method (e.g., Fixed-Point Iteration) transforms the original equation into a form that can be iteratively solved until convergence.

- **Input**: An initial guess, a function transformed for iteration, and a tolerance level.
- **Output**: The root of the equation within the desired tolerance.

## How to Use

1. **Select the method** you wish to use from the directory structure.
2. **Read the README.md** in that directory for specific instructions.
3. **Run the code** and provide the required inputs when prompted.
4. **Analyze the output** to understand the root or error computed.

## Contributing

Contributions are welcome! If you have an improvement or a new method to add, please fork the repository, make your changes, and submit a pull request. Make sure your code is well-documented and tested.
