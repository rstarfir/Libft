/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:21:20 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/17 20:26:44 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_atoi(char *str);
char	*ft_itoa(int n);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strchr(char *str, int ch);
char	*ft_strrchr(const char *s, int c);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl(char *str);
void	ft_putendl_fd(char *str, int fd);
char	*ft_strcat(char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, char *src, int nb);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

#endif