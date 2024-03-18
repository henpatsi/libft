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
