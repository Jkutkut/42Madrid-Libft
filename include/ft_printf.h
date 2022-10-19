/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:10:35 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/19 10:23:39 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_list
# include <stdlib.h> // malloc free
# include <unistd.h> // write

# include "libft.h"

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

int	ft_printf_fd(int fd, const char *format, ...);
int	ft_printf(const char *format, ...);

#endif
