# C++ Lab Work Assignment Portfolio

This repository contains the complete collection of C++ programs implemented during the lab sessions. The assignments cover core Object-Oriented Programming concepts, focusing on how to customize and optimize functions for different business scenarios.

---

## Lab Assignment Modules

### 1. Basic Concepts & Demonstration Code
* **Default Arguments:** Demonstrates how functions use fallback parameters when values are omitted during a call.
* **Area Calculation Overloading:** Shows how a single function name (`area`) can handle different shapes (Circles and Rectangles) based on input.
* **Inline Functions:** Demonstrates how to minimize execution overhead for short, repetitive math expressions.

### 2. Practical Application Scenarios

#### Scenario 1: Smart Calculator
A flexible addition program that adjusts its operations depending on the inputs provided by the user.
* **Features:** Handles addition for two integers, two decimal numbers, and three integers using the same function name. It also features a quick calculation tool to find the square of a number.

#### Scenario 2: Employee Salary Management
A corporate payroll tool designed to calculate wages for multiple classes of workforce tiers dynamically.
* **Features:** Adjusts calculation logs based on whether an employee receives a flat basic salary, a basic salary with an added bonus, or extra overtime compensation. Automatically processes and handles a mandatory 10% tax deduction on gross earnings.

#### Scenario 3: Student Result Processing
An academic grading platform built to process student report cards across varying course distributions.
* **Features:** Computes exact average marks for configurations of two, three, or five subjects. It evaluates performance against a strict baseline requirement, automatically flagging a "Pass" status for averages greater than or equal to 40, or a "Fail" status otherwise.

---

## How to Run the Programs

### System Requirements
* Any standard C++ compiler (such as GCC/g++ or Clang)
* A terminal or command line interface

### Compilation and Execution Steps

1.  Open your terminal or command prompt window.
2.  Navigate to the directory containing your source code files.
3.  Compile any specific program using a standard C++ compiler command:
    ```bash
    g++ -o Calculator smart_calculator.cpp
    ```
4.  Run the generated executable file to interact with the console interface:
    ```bash
    ./Calculator
    ```
