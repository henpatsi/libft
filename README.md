# libft

A library containing helper functions, including the recreations of some C library functions. This was started as the first project at Hive Helsinki and is being expanded with additional useful functions over time. Some of the functions are dependent on the C library functions read, write, malloc, and free.

## Functions

| Name | Prototype | Description |
| ---- | --- | --- |
| ft_isdigit | int	ft_isdigit(int c) | If _c_ is the decimal ascii number of a digit ('0' - '9'), returns 1, else returns 0 |
| ft_isalpha | int	ft_isalpha(int c) | If _c_ is the decimal ascii number of a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isalnum | int	ft_isalnum(int c) | If _c_ is the decimal ascii number of a digit ('0' - '9') or a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isspace | int	ft_isspace(int c) | If _c_ is the decimal ascii number of a space (' ', '\t', '\n', '\v', '\f', '\r'), returns 1, else returns 0 |
| ft_isascii | int	ft_isascii(int c) | If _c_ is a decimal ascii number (0 - 127), returns 1, else returns 0 |
| ft_isprint | int	ft_isprint(int c) | If _c_ is a printable decimal ascii number (32 - 126), returns 1, else returns 0 |
