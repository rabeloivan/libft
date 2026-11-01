*This project has been created as part of the 42 curriculum by irabelo.*

# Libft

## Description

Libft is a C library that contains general-purpose functions for use in future projects. Its goal is to understand how common library functions work through their implementation, while practicing the use of pointers, memory management, string manipulation, and linked lists.

The project compiles a static library called `libft.a`.
Its public function declarations are available in `libft.h`.

## Library Overview

The library is organized into three parts:

### Part 1 — Libc Functions

Reimplementations of standard library functions, using the `ft_` prefix:

- Character classification and conversion: functions such as `ft_isalpha`, `ft_isdigit`, `ft_toupper`, and `ft_tolower`.
- Memory operations: functions such as `ft_memset`, `ft_memcpy`, `ft_memmove`, and `ft_memcmp`.
- String operations: functions such as `ft_strlen`, `ft_strlcpy`, `ft_strchr`, and `ft_strncmp`.
- Conversion and allocation: `ft_atoi`, `ft_calloc`, and `ft_strdup`.

### Part 2 — Additional Functions

- `ft_substr`, `ft_strjoin`, and `ft_strtrim`: create substrings, concatenate strings, and remove selected characters from the ends of strings.
- `ft_split`: splits a string using a delimiter.
- `ft_itoa`: converts an integer to a string.
- `ft_strmapi` and `ft_striteri`: apply a function to each character in a string, creating a new string or modifying the existing one.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`: write characters, strings, or numbers to a file descriptor.

The caller must free dynamically allocated results when they are no longer needed.
For `ft_split`, each string must be freed before freeing the pointer array.

### Part 3 — Linked Lists

These functions operate on `t_list`, whose nodes contain a `content` pointer and a `next` pointer:

- `ft_lstnew`: creates a node.
- `ft_lstadd_front` and `ft_lstadd_back`: insert nodes.
- `ft_lstsize` and `ft_lstlast`: retrieve the size and the last node.
- `ft_lstdelone` and `ft_lstclear`: delete a node or a list, using a callback function to free the contents.
- `ft_lstiter` and `ft_lstmap`: apply a function to the contents of the nodes, either in the existing list or while creating a new list.

## Instructions

### Requirements

- A C compiler available as `cc`
- `make`
- `ar`

### Compilation

Run the following from the root of the repository:

```sh
make
```

This creates the `libft.a` file. The source code is compiled with the `-Wall -Wextra -Werror` options.

Other available commands:

```sh
make clean   # Removes the object files
make fclean  # Removes the object files and libft.a
make re      # Cleans and recompiles
```

### Installation

There is no installation step. `libft.a` is a static library and is linked directly into your program at compile time (see **Usage** below).

### Usage

Include `libft.h` in your C program:

```c
#include "libft.h"
```

For a program named `main.c` in the root of the repository, compile and link it:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o example
./example
```

`main.c` is your own program that uses the library.
`libft.a` is a static library and cannot be executed directly.

## Resources

### Documentation and References
- `man 3` pages for the reimplemented libc functions (e.g. `man 3 strlen`, `man 3 memmove`, `man 3 calloc`, `man 3 strlcpy`, `man 3 atoi`) — used to understand the exact behavior, return values and edge cases of each function before reimplementing it.
- 42 documentation (the project subject and the Norm / norminette documentation) — used for the project requirements, allowed functions, and coding style rules.
- YouTube channel **"De Aluno Para Aluno"** (https://www.youtube.com/@DeAlunoParaAluno) — used as a tutorial reference for C fundamentals: pointers, memory allocation, string manipulation and linked lists.

### AI Usage
AI was used **only as a learning aid**, not to generate code. In particular, AI was used to **understand concepts through visualizations** (memory diagrams, pointer layouts and step-by-step graphical explanations) before implementing the functions myself. Specifically:
- **ft_memmove**: visualized the overlap between `src` and `dst` to understand why the copy direction matters, then implemented and tested it.
- **ft_calloc**: visualized how `nmemb * size` can overflow.
- **ft_split / ft_lstmap**: visualized the pointer-array layout and the linked-list node structure to understand the correct free order and mid-list failure behavior.
- **ft_atoi / ft_itoa**: discussed edge cases (`INT_MIN`, leading whitespace, sign handling).

Tool used: LearnHarness (https://github.com/amosblomqvist/learnharness) — an AI-agent-based learning tool that builds a knowledge graph and teaches concepts step by step from the learner's current understanding.