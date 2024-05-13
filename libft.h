/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:42:25 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/02 14:44:38 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//--- TYPE FUNCTIONS ---//

/**
 * Checks if the given int is the decimal ascii number of a digit.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c corresponds to a digit ('0' - '9'), else returns 0.
 */
int		ft_isdigit(int c);

/**
 * Checks if the given int is the decimal ascii number of a letter.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c corresponds to a letter 
 * ('a' - 'z' or 'A' - 'Z'), else returns 0.
 */
int		ft_isalpha(int c);

/**
 * Checks if the given int is the decimal ascii number of a digit or a letter.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c corresponds to a digit ('0' - '9') or a letter
 * ('a' - 'z' or 'A' - 'Z'), else returns 0.
 */
int		ft_isalnum(int c);

/**
 * Checks if the given int is the decimal ascii number of a space.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c corresponds to a space
 * (' ', '\t', '\n', '\v', '\f', '\r'), else returns 0.
 */
int		ft_isspace(int c);

/**
 * Checks if the given int is in the ascii range.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c is a decimal ascii number (0 - 127), else returns 0.
 */
int		ft_isascii(int c);

/**
 * Checks if the given int is in the printable ascii range.
 * 
 * @param[in] c The int to be checked
 * @returns Returns 1 if c is a printable decimal ascii number
 * (32 - 126), else returns 0.
 */
int		ft_isprint(int c);

//--- MEMORY FUNCTIONS ---//

/**
 * Searches a given length from a memory area for a byte of specific value.
 * 
 * @param[in] s The memory area to be searched
 * @param[in] c The value of the byte to search for
 * @param[in] n The number of bytes to search from the start
 * @returns Returns a pointer to the first occurence of c if
 * found, else returns 0.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * Compares two memory areas up to a given length.
 * 
 * @param[in] s1 The first areas
 * @param[in] s2 The second areas
 * @param[in] n The number of bytes to compare
 * @returns On the first occurence of a differing value, returns their
 * difference. Returns 0 if s1 and s2 are identical.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Copies the specified amount of bytes from the source to the destination.
 * 
 * Undefined if source and destination overlap.
 * 
 * @param[in] dst The destination to copy to
 * @param[in] src The source to copy from
 * @param[in] n The number of bytes to copy
 * @returns Returns a pointer to dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copies the specified amount of bytes from the source to the destination.
 * 
 * Always copies the original content of the source to the destination, even
 * if they overlap.
 * 
 * @param[in] dst The destination to copy to
 * @param[in] src The source to copy from
 * @param[in] n The number of bytes to copy
 * @returns Returns a pointer to dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Sets a specified amount of bytes to a given value.
 * 
 * @param[in] b The memory area to start from
 * @param[in] c The value the bytes will be set to
 * @param[in] len The number of bytes to set to the given value
 * @returns Returns a pointer to b.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * Sets a specified amount of bytes to 0.
 * 
 * @param[in] s The memory area to start from
 * @param[in] n The number of bytes to set to the given value
 */
void	ft_bzero(void *s, size_t n);

/**
 * Allocates memory using malloc, then zeroes the allocated memory.
 * 
 * @param[in] count The amount of memory blocks to allocate
 * @param[in] size The size of each memory block
 * @returns Returns a pointer to the start of the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size);

//--- CONVERSION FUNCTIONS ---//

/**
 * Converts a lowercase letter into an uppercase letter.
 * 
 * @param[in] c The int to be converted
 * @returns Returns the ascii code corresponding to the uppercase letter 
 * if c corresponds to the ascii code of a lowercase letter, else returns c.
 */
int		ft_toupper(int c);

/**
 * Converts an uppercase letter into a lowercase letter.
 * 
 * @param[in] c The int to be converted
 * @returns Returns the ascii code corresponding to the lowercase letter 
 * if c corresponds to the ascii code of an uppercase letter, else returns c.
 */
int		ft_tolower(int c);

/**
 * Converts the initial portion of a string into the corresponding integer.
 * Ignores spaces before digits and accepts one sign.
 * Behaviour is undefined if the initial portion of the given string does
 * not correspond to an integer.
 * 
 * @param[in] str The string to be converted
 * @returns Returns the converted integer.
 */
int		ft_atoi(const char *str);

/**
 * Converts the initial portion of a string into the corresponding long integer.
 * Ignores spaces before digits and accepts one sign.
 * Behaviour is undefined if the initial portion of the given string does not
 * correspond to a long integer.
 * 
 * @param[in] str The string to be converted
 * @returns Returns the converted long integer.
 */
long	ft_atol(const char *str);

/**
 * Converts the given integer into its string representation.
 * 
 * @param[in] n The integer to be converted
 * @returns Returns the converted integer on success, else return 0.
 */
char	*ft_itoa(int n);

//--- STRING FUNCTIONS ---//

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
int		ft_stristype(char *s, int (*f)(int));
void	ft_freestrs(char **strs);

//--- PUT FUNCTIONS ---//

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);
void	ft_puthex_fd(unsigned int n, int use_capitals, int fd);
void	ft_putaddr_fd(void *ptr, int fd);

//--- LINKED LIST FUNCTIONS ---//

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//--- PRINTF FUNCTIONS ---//

int		ft_printf(const char *str, ...);
int		ft_i_putchar(char c);
int		ft_i_putstr(char *s);
int		ft_i_putnbr(int n);
int		ft_i_putunbr(unsigned int n);
int		ft_i_puthex(unsigned int n, int use_capitals);
int		ft_i_putaddr(void *ptr);
int		ft_add_check_error(int value, int temp);

//--- GET_NEXT_LINE FUNCTIONS ---//

char	*get_next_line(int fd);
ssize_t	ft_i_strchr(const char *s, int c);
char	*ft_strldup(const char *s1, size_t len);
char	*ft_stradd(char *s1, char *s2);

#endif
