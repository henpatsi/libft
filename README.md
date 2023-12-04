# libft

A library containing helper functions, including the recreations of some C library functions. This was started as the first project at Hive Helsinki and is being expanded with additional useful functions over time. Some of the functions are dependent on the C library functions read, write, malloc, and free.

## Functions

### Type
| Name       | Prototype              | Description |
| ---------- | ---------------------- | ----------- |
| ft_isdigit | int	ft_isdigit(int c) | If `c` is the decimal ascii number of a digit ('0' - '9'), returns 1, else returns 0 |
| ft_isalpha | int	ft_isalpha(int c) | If `c` is the decimal ascii number of a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isalnum | int	ft_isalnum(int c) | If `c` is the decimal ascii number of a digit ('0' - '9') or a letter ('a' - 'z' or 'A' - 'Z'), returns 1, else returns 0 |
| ft_isspace | int	ft_isspace(int c) | If `c` is the decimal ascii number of a space (' ', '\t', '\n', '\v', '\f', '\r'), returns 1, else returns 0 |
| ft_isascii | int	ft_isascii(int c) | If `c` is a decimal ascii number (0 - 127), returns 1, else returns 0 |
| ft_isprint | int	ft_isprint(int c) | If `c` is a printable decimal ascii number (32 - 126), returns 1, else returns 0 |

### Mem
| Name       | Prototype                                                | Description |
| ---------- | -------------------------------------------------------- | ----------- |
| ft_memchr  | void	*ft_memchr(const void *s, int c, size_t n)          | Searches the first `n` bytes at `s` for `c`. If found, returns a pointer to the first occurence, else returns 0 |
| ft_memcmp  | int	ft_memcmp(const void *s1, const void *s2, size_t n) | Compares the first `n` bytes of `s1` and `s2`. On the first occurence of a differing value, returns their difference. Returns 0 if `s1` and `s2` are identical |
| ft_memcpy  | void	*ft_memcpy(void *dst, const void *src, size_t n)    | Copies `n` bytes from `src` to `dst`. Undefined if `src` and `dst` overlap |
| ft_memmove | void	*ft_memmove(void *dst, const void *src, size_t n)   | Copies `n` bytes from `src` to `dst`. Always copies the original content of `src` to `dst`, even if they overlap |
| ft_memset  | void	*ft_memset(void *b, int c, size_t len)              | Sets `len` bytes at `b` equal to `c` |
| ft_bzero   | void	ft_bzero(void *s, size_t n)                         | Zeroes `n` bytes at `s` |
| ft_calloc  | void	*ft_calloc(size_t count, size_t size)               | Allocates (using malloc) and zeroes `count` * `size` amount of memory |

### Conv
| Name       | Prototype                     | Description |
| ---------- | ----------------------------- | ----------- |
| ft_tolower | int	ft_tolower(int c)        | If `c` is an uppercase letter, converts it to lowercase |
| ft_toupper | int	ft_toupper(int c)        | If `c` is a lowercase letter, converts it to uppercase |
| ft_atoi    | int	ft_atoi(const char *str) | Returns the number represented by `str` as the corresponding integer. Behaviour is undefined if the number is outside the range of type int. The number can be prefixed with any number of spaces and one '+' or '-'. Any characters following the number are ignored |
| ft_atol    | long	ft_atol(const char *str) |  Works as ft_atoi, but converts to and returns type long instead of int |
| ft_itoa    | char	*ft_itoa(int n)          | Returns the string representation of `n` |

### Str
| Name        | Prototype                                                               | Description |
| ----------- | ----------------------------------------------------------------------- | ----------- |
| ft_strchr   | char	*ft_strchr(const char *s, int c)                                  | Searches for the first occurence of `c` in string `s`. Returns a pointer to the first occurence if found, else returns 0 |
| ft_strrchr  | char	*ft_strrchr(const char *s, int c)                                 | Searches for the last occurence of `c` in string `s`. Returns a pointer to the last occurence if found, else returns 0 |
| ft_strcmp   | int	ft_strcmp(const char *s1, const char *s2)                           | Compares strings `s1` and `s2`. If a difference is encountered, returns the difference in values, else returns 0 |
| ft_strncmp  | int	ft_strncmp(const char *s1, const char *s2, size_t n)                | Compares up to `n` chars of strings `s1` and `s2`. If a difference is encountered, returns the difference in values, else returns 0 |
| ft_strnstr  | char	*ft_strnstr(const char *haystack, const char *needle, size_t len) | Searches up to `n` chars of string `haystack` for string `needle`. If found, returns a pointer to the start of `needle` in `haystack`, else returns 0. If `needle` is an empty string, returns `haystack` |
| ft_strlen   | size_t	ft_strlen(const char *s)                                        | Returns the length of string `s`, excluding the null terminator |
| ft_strlcpy  | size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)          | Copies up to `dstsize - 1` chars from string `src` to `dst`. Always null terminates unless `dstsize` is 0. The user should ensure `dstsize` never exceeds the size allocated for `dst`. Returns the length of the string that it attempted to copy |
| ft_strlcat  | size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)          | Concatenates chars from string `src` to the end of the string at `dst`, up to a total string length of `dstsize - 1`. Always null terminates unless `dstsize` is 0. The user should ensure `dstsize` never exceeds the size allocated for `dst`. Returns the length of the string that it attempted to create |
| ft_strdup   | char	*ft_strdup(const char *s1)                                        | Returns a new string that is a duplicate of string `s1` |
| ft_substr   | char	*ft_substr(char const *s, unsigned int start, size_t len)         | Returns a new string that is a substring of string `s1`, starting from index `start` with a maximum length of `len` |
| ft_strjoin  | char	*ft_strjoin(char const *s1, char const *s2)                       | Returns a new string with string `s2` concatenated to `s1` |
| ft_strtrim  | char	*ft_strtrim(char const *s1, char const *set)                      | Returns a new string with all characters in `set` removed from the start and end of `s1` |
| ft_split    | char	**ft_split(char const *s, char c)                                 | Splits string `s` at each occurence of `c` and returns a list of the resulting strings. Does not include empty strings and is always null terminated |
| ft_striteri | void	ft_striteri(char *s, void (*f)(unsigned int, char *))              | Performs function `f` for each char of string `s`, with the index of the char given as a parameter |
| ft_strmapi  | char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))         | Returns a new string that is a duplicate of string `s1`, where each of the chars has been modified using function `f`, with the index of the char given as a parameter |

### Put
| Name          | Prototype                                                    | Description |
| ------------- | ------------------------------------------------------------ | ----------- |
| ft_putchar_fd | void	ft_putchar_fd(char c, int fd)                          | Writes char `c` to file descriptor `fd` |
| ft_putstr_fd  | void	ft_putstr_fd(char *s, int fd)                          | Writes string `s` to file descriptor `fd` |
| ft_putendl_fd | void	ft_putendl_fd(char *s, int fd)                         | Writes string `s` followed by a newline to file descriptor `fd` |
| ft_putnbr_fd  | void	ft_putnbr_fd(int n, int fd)                            | Writes the decimal representation of int `n` to the file descriptor `fd` |
| ft_putunbr_fd | void	ft_putunbr_fd(unsigned int n, int fd)                  | Writes the decimal representation of unsigned int `n` to the file descriptor `fd` |
| ft_puthex_fd  | void	ft_puthex_fd(unsigned int n, int use_capitals, int fd) | Writes the hexadecimal representation of int `n` to the file descriptor `fd`. `use_capitals` can be 1 (capitals) or 0 (no capitals) |
| ft_putaddr_fd | void	ft_putaddr_fd(void *ptr, int fd)                       | Writes the address of pointer `ptr` ("0x" followed by a long int as a hexadecimal) to the file descriptor `fd`. |

### Lst
| Name            | Prototype                                                                | Description |
| --------------- | ------------------------------------------------------------------------ | ----------- |
| ft_lstnew       | t_list	*ft_lstnew(void *content)                                        |  |
| ft_lstadd_back  | void	ft_lstadd_back(t_list **lst, t_list *new)                          |  |
| ft_lstadd_front | void	ft_lstadd_front(t_list **lst, t_list *new)                         |  |
| ft_lstdelone    | void	ft_lstdelone(t_list *lst, void (*del)(void *))                     |  |
| ft_lstclear     | void	ft_lstclear(t_list **lst, void (*del)(void *))                     |  |
| ft_lstsize      | int	ft_lstsize(t_list *lst)                                              |  |
| ft_lstlast      | t_list	*ft_lstlast(t_list *lst)                                         |  |
| ft_lstiter      | void	ft_lstiter(t_list *lst, void (*f)(void *))                         |  |
| ft_lstmap       | t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) |  |
