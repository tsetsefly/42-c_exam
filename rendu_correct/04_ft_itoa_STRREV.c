/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 10:05:18 by exam              #+#    #+#             */
/*   Updated: 2016/10/11 10:05:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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

int	num_digits(long nbr)
{
	int digits = 0;

	if (nbr == 0 || nbr == -0)
		return (1);
	while (nbr > 0)
	{
		digits++;
		nbr /= 10;
	}
	return (digits);
}

char	*ft_itoa(int nbr)
{
	int i = 0;
	int digits;
	int neg = 0;
	long num;
	char *array;

	num = nbr;
	if (num < 0)
	{
		num *= -1;
		neg = 1;
	}
	digits = num_digits(num);
	array = (char *)malloc((num_digits(num) + neg + 1) * sizeof(char));
	while (i < digits)
	{
		array[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	if (neg)
	{
		array[i] = '-';
		i++;
	}
	array[i] = '\0';
	return (strrev(array));
}

// int main ()
// {
// 	int num = -2147483648;
// 	printf("num: %d\nft_itoa: %s\n", num, ft_itoa(num));
// 	return (0);	
// }
