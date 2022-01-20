/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:13:41 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/20 15:33:22 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int		ft_islowercase(int c);
int		ft_isuppercase(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char* s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*
The  strcmp()  function  compares  the two strings s1 and s2.  The locale is not
       taken into account (for a locale-aware comparison, see strcoll(3)).  The compar‐
       ison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the first (at most) n
       bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal  to,  or
       greater  than  zero if s1 (or the first n bytes thereof) is found, respectively,
       to be less than, to match, or be greater than s2.
*/
// void *memchr(const void *s, int c, size_t n); // The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area  pointed to by s are interpreted as unsigned char.
// int memcmp(const void *s1, const void *s2, size_t n);
// /*
// The  memcmp()  function compares the first n bytes (each interpreted as unsigned
//        char) of the memory areas s1 and s2.

// RETURN VALUE
//        The memcmp() function returns an integer less than, equal to,  or  greater  than
//        zero  if  the  first  n  bytes of s1 is found, respectively, to be less than, to
//        match, or be greater than the first n bytes of s2.

//        For a nonzero return value, the sign is determined by the sign of the difference
//        between the first pair of bytes (interpreted as unsigned char) that differ in s1
//        and s2.

//        If n is zero, the return value is zero.
// */

// char *strnstr(const char *s1, const char *s2, size_t n);
// /*
// The Fn strnstr function locates the first occurrence of the null-terminated string Fa little in the string Fa big , where not more than Fa len characters are searched. Characters that appear after a `\0' character are not searched. Since the Fn strnstr function is a Fx specific API, it should only be used when portability is not a concern.
// */

// int atoi(const char *nptr); /*
// The  atoi()  function  converts  the initial portion of the string pointed to by
//        nptr to int.  The behavior is the same as

//            strtol(nptr, NULL, 10);

//        except that atoi() does not detect errors.

//        The atol() and atoll() functions behave the same as  atoi(),  except  that  they
//        convert  the  initial portion of the string to their return type of long or long
//        long.

// RETURN VALUE
//        The converted value or 0 on error.
// */


#endif
