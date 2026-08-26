# 1337 Days

A collection of my **1337 coding journey exercises**, covering Shell scripting, C programming, and the Rush projects.

This repository contains the work I completed while learning the fundamentals required for the 1337 / 42-style curriculum.

---

## 📚 Repository Structure

```text
Days/
├── Shell00/
├── Shell01/
├── C00/
├── C01/
├── C02/
├── C03/
├── C04/
├── C05/
├── C06/
└── Rush/
```

Each directory represents a different stage/day of the curriculum.

---

# 🐚 Shell

## Shell00

The first Shell module focuses on basic Unix commands, files, permissions, Git, and shell scripting.

### Exercises

| Exercise | Main concept |
|---|---|
| ex00 | File creation / permissions |
| ex01 | Archives and files |
| ex02 | Creating and extracting archives |
| ex03 | SSH public key |
| ex04 | `ls` command options |
| ex05 | Git commit history |
| ex06 | `.gitignore` |
| ex07 | File permissions |
| ex08 | Shell scripting |
| ex09 | File type detection / magic numbers |

---

## Shell01

Shell01 introduces more practical command-line operations and scripting.

### Exercises

| Exercise | Main concept |
|---|---|
| ex01 | `id`, groups, and users |
| ex02 | `find` |
| ex03 | Counting files |
| ex04 | `ifconfig` / network information |
| ex05 | Special file / environment handling |
| ex06 | Filtering command output |
| ex07 | `passwd`-style text processing |
| ex08 | Text manipulation with `sed` / shell tools |

---

# 💻 C Programming

The C modules build progressively from basic output to pointers, strings, recursion, algorithms, and command-line arguments.

---

## C00 — Introduction to C

The first C module introduces:

- `write`
- Functions
- Characters
- ASCII
- Loops
- Conditions
- Basic number manipulation

### Exercises

- `ex00` — `ft_putchar`
- `ex01` — Print the alphabet
- `ex02` — Print the alphabet in reverse
- `ex03` — Print numbers
- `ex04` — Check whether a number is negative
- `ex05` — Print combinations
- `ex06` — Print two-digit combinations
- `ex07` — `ft_putnbr`

**Main goal:** become comfortable writing basic C functions and controlling program flow.

---

# 🧠 C01 — Pointers

C01 introduces one of the most important concepts in C: **pointers**.

### Exercises

- `ex00` — `ft_ft`
- `ex01` — `ft_ultimate_ft`
- `ex02` — `ft_swap`
- `ex03` — `ft_div_mod`
- `ex04` — `ft_ultimate_div_mod`
- `ex05` — `ft_putstr`
- `ex06` — `ft_strlen`
- `ex07` — `ft_rev_int_tab`
- `ex08` — `ft_sort_int_tab`

### Concepts learned

- Addresses: `&variable`
- Dereferencing: `*pointer`
- Passing variables by address
- Modifying variables inside functions
- Arrays and pointers
- Integer arrays
- Basic sorting

Example:

```c
int number;

number = 42;
ft_ft(&number);
```

Here `&number` gives the address of `number`, allowing the function to modify the original variable.

---

# 🔤 C02 — Strings and Arrays

C02 focuses heavily on strings and character arrays.

### Exercises

- `ex00` — `ft_strcpy`
- `ex01` — `ft_strncpy`
- `ex02` — `ft_str_is_alpha`
- `ex03` — `ft_str_is_numeric`
- `ex04` — `ft_str_is_lowercase`
- `ex05` — `ft_str_is_uppercase`
- `ex06` — `ft_str_is_printable`
- `ex07` — `ft_strupcase`
- `ex08` — `ft_strlowcase`
- `ex09` — `ft_strcapitalize`
- `ex10` — `ft_strlcpy`
- `ex11` — `ft_putstr_non_printable`

### Concepts learned

- Null-terminated strings
- Character arrays
- ASCII ranges
- String copying
- String length
- String validation
- Uppercase / lowercase conversion
- Character classification

A C string is essentially an array of characters ending with:

```c
'\0'
```

Understanding this is essential for almost every later C exercise.

---

# 🔗 C03 — String Manipulation

C03 continues working with strings and introduces common string functions.

### Exercises

- `ex00` — `ft_strcmp`
- `ex01` — `ft_strncmp`
- `ex02` — `ft_strcat`
- `ex03` — `ft_strncat`
- `ex04` — `ft_strstr`
- `ex05` — `ft_strlcat`

### Concepts learned

- Comparing strings
- Comparing only part of a string
- Concatenation
- Limited concatenation
- Searching for a substring
- Buffer size and string boundaries

This module is especially useful for understanding how functions from the C standard library work internally.

---

# 🔢 C04 — Numbers and Conversion

C04 focuses on outputting numbers, converting strings to integers, and working with number bases.

### Exercises

- `ex00` — `ft_strlen`
- `ex01` — `ft_putstr`
- `ex02` — `ft_putnbr`
- `ex03` — `ft_atoi`
- `ex04` — `ft_putnbr_base`

### Concepts learned

- Integer output
- String-to-integer conversion
- Negative numbers
- Recursion
- Number bases
- Base validation
- Representing numbers in binary, hexadecimal, etc.

For example, `ft_putnbr_base` can represent a number using a custom base:

```text
Base 10: 42
Base 2:  101010
Base 16: 2A
```

---

# 🧮 C05 — Recursion and Algorithms

C05 introduces mathematical algorithms and recursion.

### Exercises

- `ex00` — Iterative factorial
- `ex01` — Recursive factorial
- `ex02` — Iterative power
- `ex03` — Recursive power
- `ex04` — Fibonacci
- `ex05` — Square root
- `ex06` — Prime number checking
- `ex07` — Find the next prime

### Concepts learned

- Iteration vs recursion
- Factorials
- Powers
- Fibonacci sequence
- Integer square roots
- Prime numbers
- Divisibility
- Algorithmic thinking

Example:

```text
factorial(5)
= 5 × 4 × 3 × 2 × 1
= 120
```

---

# 🧾 C06 — argc / argv

C06 introduces command-line arguments.

### Exercises

- `ex00` — Print the program name
- `ex01` — Print program arguments
- `ex02` — Print arguments in reverse
- `ex03` — Sort program arguments

### Concepts learned

- `argc`
- `argv`
- Command-line arguments
- Arrays of strings
- String comparison
- ASCII ordering
- Sorting

Example command:

```bash
./program hello world 42
```

The arguments are stored inside `argv`:

```text
argv[0] → ./program
argv[1] → hello
argv[2] → world
argv[3] → 42
```

`argc` tells you how many arguments exist.

---

# 🚀 Rush Projects

The `Rush` directory contains the Rush exercises completed during the pool.

Current projects:

```text
Rush/
├── Rush01/
├── Rush02/
├── Rush03/
└── Rush04/
```

Each Rush project contains its own:

- `main.c`
- `ft_putchar.c`
- `rushXX.c`

The Rush projects are focused on combining the basic C knowledge from the earlier exercises into a complete small program.

---

# 🛠️ How to Compile

Most individual C exercises can be compiled with:

```bash
cc -Wall -Wextra -Werror file.c
```

For example:

```bash
cd C05/ex06
cc -Wall -Wextra -Werror ft_is_prime.c
```

If an exercise needs a `main.c` for testing, compile both files:

```bash
cc -Wall -Wextra -Werror main.c ft_is_prime.c
```

Then run:

```bash
./a.out
```

> Note: The official 1337/42 exercises may have specific compilation and submission requirements. A test `main.c` is generally for local testing and is not necessarily part of the files to submit.

---

# 🧪 Testing

For exercises that only contain a function, it is useful to create a temporary `main.c`.

Example:

```c
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(18));
	return (0);
}
```

Compile:

```bash
cc -Wall -Wextra -Werror main.c ft_is_prime.c
```

---

# 🎯 What This Repository Covers

By the end of these modules, the main concepts covered include:

```text
C Basics
  ↓
Functions
  ↓
Loops & Conditions
  ↓
Pointers
  ↓
Arrays
  ↓
Strings
  ↓
String Manipulation
  ↓
Number Conversion
  ↓
Recursion
  ↓
Algorithms
  ↓
argc / argv
  ↓
Sorting
  ↓
Complete Mini Projects
```

This progression is designed to build the foundations needed for larger C projects.

---

# ⚠️ Notes

Some temporary/editor files may exist in the repository, such as:

```text
.swp
```

These are Vim/Editor temporary files and are not part of the actual exercises.

For a cleaner repository, they can be removed and added to `.gitignore`.

---

# 📌 Goal

The goal of this repository is not simply to collect finished exercises.

It documents the progression from:

**"I don't know C"**

to:

**"I can understand memory, pointers, strings, recursion, algorithms, and command-line arguments well enough to build programs on my own."**

This repository represents the learning process throughout the 1337 pool.
