# libft

A library containing helper functions, including the recreations of some C library functions. This was started as the first project at Hive Helsinki and is being expanded with additional useful functions over time. Some of the functions are dependent on the C library functions read, write, malloc, and free.

## Functions

| Name | Prototype | Description |
| ---- | --- | --- |
| ft_isdigit | int	ft_isdigit(int c) | If `c` is the decimal ascii number of a digit ('0' - '9'), returns 1, else returns 0 |
| ft_isalpha | int	ft_isalpha(int c) | If `c` is the decimal ascii number of a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isalnum | int	ft_isalnum(int c) | If `c` is the decimal ascii number of a digit ('0' - '9') or a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isspace | int	ft_isspace(int c) | If `c` is the decimal ascii number of a space (' ', '\t', '\n', '\v', '\f', '\r'), returns 1, else returns 0 |
| ft_isascii | int	ft_isascii(int c) | If `c` is a decimal ascii number (0 - 127), returns 1, else returns 0 |
| ft_isprint | int	ft_isprint(int c) | If `c` is a printable decimal ascii number (32 - 126), returns 1, else returns 0 |
| ft_memchr | void	*ft_memchr(const void *s, int c, size_t n) | Searches the first `n` bytes at `s` for `c`. If found, returns a pointer to the first occurence, else returns 0 |
| ft_memcmp | int	ft_memcmp(const void *s1, const void *s2, size_t n) | Compares the first `n` bytes of `s1` and `s2`. On the first occurence of a differing value, returns their difference. Returns 0 if `s1` and `s2` are identical |
| ft_memcpy | void	*ft_memcpy(void *dst, const void *src, size_t n) | Copies `n` bytes from `src` to `dst`. Undefined if `src` and `dst` overlap |
| ft_memmove | void	*ft_memmove(void *dst, const void *src, size_t n) | Copies `n` bytes from `src` to `dst`. Always copies the original content of `src` to `dst`, even if they overlap |
| ft_memset | void	*ft_memset(void *b, int c, size_t len) | Sets `len` bytes at `b` equal to `c` |
| ft_bzero | void	ft_bzero(void *s, size_t n) | Zeroes `n` bytes at `s` |
| ft_calloc | void	*ft_calloc(size_t count, size_t size) | Allocates (using malloc) and zeroes `count` * `size` amount of memory |
