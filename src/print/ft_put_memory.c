/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:58:14 by jre-gonz          #+#    #+#             */
/*   Updated: 2022/10/18 20:01:47 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LINE_SIZE 16
#define HEX_BASE "0123456789abcdef"

void	print_memory_text(char *str, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		if (str[i] < 32 || str[i] >= 127)
			str[i] = '.';
	write(1, str, size);
}

void	char2hex(char c)
{
	char			digits[2];

	if (c < 0)
	{
		digits[0] = (char)(((unsigned int) 256 + c) / 16);
		digits[1] = (char)(((unsigned int) 256 + c) % 16);
	}
	else
	{
		digits[0] = c / 16;
		digits[1] = c % 16;
	}
	digits[0] = HEX_BASE[(int) digits[0]];
	digits[1] = HEX_BASE[(int) digits[1]];
	write(1, digits, 2);
}

void	print_direction(unsigned long addr)
{
	char	addr_arr[16];
	int		i;

	i = 16;
	while (addr > 0)
	{
		addr_arr[--i] = (addr % 16);
		if (addr_arr[i] >= 10)
			addr_arr[i] += 'a' - 10;
		else
			addr_arr[i] += '0';
		addr /= 16;
	}
	while (--i >= 0)
		addr_arr[i] = '0';
	write(1, addr_arr, 16);
}

void	print_memory_line(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	print_direction((unsigned long) addr);
	write(1, ":", 2);
	while (i < size)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		char2hex(((char *)addr)[i]);
		i++;
	}
	while (i++ < LINE_SIZE)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
	}
	write(1, " ", 1);
	print_memory_text((char *)addr, size);
	write(1, "\n", 1);
}

void	*ft_put_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > LINE_SIZE)
	{
		while (i < size - LINE_SIZE)
		{
			print_memory_line(addr + i, LINE_SIZE);
			i += LINE_SIZE;
		}
	}
	print_memory_line(&((char *) addr)[i], size - i);
	return (addr);
}
