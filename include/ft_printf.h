/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:10:35 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/05/27 07:41:36 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_list
# include <stdlib.h> // malloc free
# include <unistd.h> // write

# define STDOUT 1

# ifndef FD
#  define FD STDOUT
# endif

# ifdef LINUX
#  define NULL_P "(nil)"
# else
#  define NULL_P 0
# endif

# define DECIMAL "0123456789"
# define HEXADECIMAL "0123456789abcdef"

// Print logic

int		ft_format_printf(int fd, const char *format, va_list lst);
int		ft_print_argv(int fd, const char **format, va_list lst);
int		ft_print_number(int fd, char type, va_list lst);
int		ft_print_until_format(int fd, const char **format);
size_t	ft_put_pointer_fd(unsigned long p, int fd);
size_t	ft_putchar_fd_l(char s, int fd);
size_t	ft_putstr_fd_l(char *s, int fd);

// tools

int		ft_hasany(const char *str, char c);
char	*ft_itoa_base(ssize_t nbr, char *base);
size_t	ft_nbrlen(ssize_t n, ssize_t base_len);

// Str
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strtoupper(char *str);

// Printf
int		ft_printf_fd(int fd, const char *format, ...);
int		ft_printf(const char *format, ...);

#endif