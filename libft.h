/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:13:41 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/01/18 22:57:39 by jkutkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char* s);
void *	ft_memset(void *s, int c, size_t n);
// void explicit_bzero(void *s, size_t n); // The  bzero()  function  erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
// void *memcpy(void *restrict dest, const void *restrict src, size_t n); // The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.
// void *memmove(void *dest, const void *src, size_t n); // The  memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first  copied  into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
// size_t strlcpy(char *dst, const char *src, size_t size);
// /*
// The strlcpy() and strlcat() functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

// The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

// The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

// Return Values
// The strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcpy() that means the length of src. For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.

// Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL). This keeps strlcat() from running off the end of a string. In practice this should not happen (as it means that either size is incorrect or that dst is not a proper ''C'' string). The check exists to prevent potential security problems in incorrect code.
// */
// size_t strlcat(char *dst, const char *src, size_t size);
// int toupper(int c);
// int tolower(int c);

// char *strchr(const char *s, int c);
// /*
// The strchr() function returns a pointer to the first occurrence of the character
//        c in the string s.

//        The strrchr() function returns a pointer to the last occurrence of the character
//        c in the string s.
// */
// char *strrchr(const char *s, int c);

// int strncmp(const char *s1, const char *s2, size_t n);
// /*
// The  strcmp()  function  compares  the two strings s1 and s2.  The locale is not
//        taken into account (for a locale-aware comparison, see strcoll(3)).  The compar‐
//        ison is done using unsigned characters.

//        strcmp() returns an integer indicating the result of the comparison, as follows:

//        • 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.

//        The strncmp() function is similar, except it compares only the first (at most) n
//        bytes of s1 and s2.

// RETURN VALUE
//        The strcmp() and strncmp() functions return an integer less than, equal  to,  or
//        greater  than  zero if s1 (or the first n bytes thereof) is found, respectively,
//        to be less than, to match, or be greater than s2.
// */
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
