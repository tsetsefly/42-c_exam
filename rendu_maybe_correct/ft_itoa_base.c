/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:06:17 by dtse              #+#    #+#             */
/*   Updated: 2016/11/06 23:06:19 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h> // REMOVE!!!

char *strrev(char *array)
{
	int i = 0;
	int len;
	int while_len;
	char tmp;

	while (array[i])
		i++;
	len = i;
	while_len = i - 1;
	i = 0;
	while (i < len / 2)
	{
		tmp = array[i];
		array[i] = array[while_len];
		array[while_len] = tmp;
		i++;
		while_len--;
	}
	return (array);
}

char	*ft_itoa_base(int value, int base)
{
	int i = 0;
	int neg = 0;
	int rem;
	char *str;

	str = (char *)malloc(sizeof(char) * 35);
	if (value == 0)
	{
		str[i++] = 0;
		str[i] = '\0';
		return (str);
	}
	if (value < 0)
	{
		value *= -1;
		if (base == 10)
			neg = 1;
	}
	while (value != 0)
	{
		rem = value % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		value /= base;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	return (strrev(str));
}

// int main () // REMOVE!!!
// {
// 	printf("Base 10: 1567  = %s [1567]\n", ft_itoa_base(1567, 10));
// 	printf("Base 10: -1567 = %s [-1567]\n", ft_itoa_base(-1567, 10));
// 	printf("Base 2:  1567  = %s [11000011111]\n", ft_itoa_base(1567, 2));
// 	printf("Base 8: 1567   = %s [3037]\n", ft_itoa_base(1567, 8));
// 	printf("Base 16: 1567  = %s [61f]\n", ft_itoa_base(1567, 16));
// 	return (0);
// }