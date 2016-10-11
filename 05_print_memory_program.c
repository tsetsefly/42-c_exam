/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 20:27:09 by dtse              #+#    #+#             */
/*   Updated: 2016/10/10 20:49:29 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr_hex(int octet, int rem)
{
	const char *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet >> 4, rem - 1);
	write(1, base + (octet % 16), 1);
}

void	print_numbers(const unsigned char *addr, size_t size, size_t i)
{
	size_t a;

	a = 0;
	while (a < 16 && i + a < size)
	{
		ft_putnbr_hex(*(addr + i + a), 2);
		if (a % 2)
			write(1, " ", 1);
		a++;
	}
	while (a < 16)
	{
		if (a % 2)
			write(1, " ", 1);
		write(1, "  ", 2);
		a++;
	}
}

void	sp_putchar(const unsigned char *ptr)
{
	const unsigned char c = *ptr;

	if (c >= ' ' && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

void	print_chars(const unsigned char *addr, size_t size, size_t i)
{
	size_t	a;

	a = 0;
	while (a < 16 && i + a < size)
	{
		sp_putchar(addr + i + a);
		a++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		print_numbers((const unsigned char *)addr, size, i);
		print_chars((const unsigned char *)addr, size, i);
		write(1, "\n", 1);
		i += 16;
	}
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255, 12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}

