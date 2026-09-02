# 42 / 1337 C Piscine

My solutions and progress through the **42 / 1337 C Piscine**, covering the C00 → C08 modules.

This repository contains exercises completed while learning the fundamentals of C programming, memory management, pointers, strings, recursion, structures, and command-line arguments.

## 📚 Modules

| Module | Main topics |
|---|---|
| **C00** | Basic C syntax, `write`, loops, conditions, functions |
| **C01** | Pointers, addresses, swapping, arrays |
| **C02** | Strings, character checking, string manipulation |
| **C03** | String comparison and concatenation |
| **C04** | `atoi`, number conversion, number bases |
| **C05** | Recursion, factorial, powers, Fibonacci, primes |
| **C06** | `argc`, `argv`, program arguments |
| **C07** | Dynamic memory allocation with `malloc` |
| **C08** | Header files, `struct`, `typedef` |

## 📁 Repository Structure

```text
Days/
├── C00/
│   ├── ex00/
│   ├── ex01/
│   ├── ...
│   └── ex07/
│
├── C01/
│   ├── ex00/
│   ├── ...
│   └── ex08/
│
├── C02/
│   ├── ex00/
│   ├── ...
│   └── ex11/
│
├── C03/
│   ├── ex00/
│   ├── ...
│   └── ex05/
│
├── C04/
│   ├── ex00/
│   ├── ...
│   └── ex05/
│
├── C05/
│   ├── ex00/
│   ├── ...
│   └── ex07/
│
├── C06/
│   ├── ex00/
│   ├── ...
│   └── ex03/
│
├── C07/
│   ├── ex00/
│   ├── ...
│   └── ex03/
│
└── C08/
    ├── ex00/
    ├── ...
    └── ex05/
```

## 🧠 What I Learned

### C Fundamentals
- Variables and data types
- Conditions and loops
- Functions
- `write()`
- Character manipulation

### Pointers
- Addresses and dereferencing
- Passing variables by address
- Pointer manipulation
- Pointers and arrays

### Strings
- String traversal
- String copying
- String comparison
- String concatenation
- String searching

### Recursion
- Recursive functions
- Factorial
- Powers
- Fibonacci
- Prime numbers

### Command-Line Arguments
- Understanding `argc`
- Understanding `argv`
- Iterating through program arguments
- Sorting command-line arguments

### Dynamic Memory
- `malloc()`
- Allocating arrays dynamically
- `free()`
- Handling allocation sizes
- `ft_strdup`
- `ft_range`
- `ft_ultimate_range`
- `ft_strjoin`

### Structures & Headers
- `struct`
- `typedef`
- Header files
- Include guards
- Structures containing pointers
- Accessing structure members with `->`

## 🛠️ Compilation

Most exercises can be compiled with:

```bash
cc -Wall -Wextra -Werror file.c
```

For example:

```bash
cc -Wall -Wextra -Werror C04/ex03/ft_atoi.c
```

Some exercises require a custom `main.c` to test the function.

## ⚠️ 42 Norm

The code is written with the **42 Norminette rules** in mind.

To check a file:

```bash
norminette file.c
```

Or check the whole project:

```bash
norminette
```

## 🎯 Goal

The goal of this repository is to document my progression while learning C and completing the early stages of the **42 / 1337 curriculum**.

The project focuses on understanding **how C works at a low level**, rather than relying on existing library functions.

## 📈 Progress

- [x] C00
- [x] C01
- [x] C02
- [x] C03
- [x] C04
- [x] C05
- [x] C06
- [x] C07
- [x] C08

---

### 👨‍💻 Author

**Mehdi Labbi**

42 / 1337 Student

> Learning C one segmentation fault at a time.