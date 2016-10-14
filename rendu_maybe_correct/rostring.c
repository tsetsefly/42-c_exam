/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 23:42:47 by dtse              #+#    #+#             */
/*   Updated: 2016/10/13 23:42:49 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int is_spacetabnew(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int word_count(char *str, int len)
{
	int count = 0;
	int i = 0;
	while (i < len)
	{
		while (!is_spacetabnew(str[i]) && i < len)
			i++;
		count++;
		while (is_spacetabnew(str[i]) && i < len)
			i++;
	}
	return (count);
}

char **create_matrix(char *str, int wc, int len)
{
	int i = 0;
	int j = 0;
	int char_count = 0;
	char **array;

	array = (char **)malloc((wc + 1) * sizeof(char *));
	while (str[i])
	{
		while (!is_spacetabnew(str[i]) && i < len)
		{
			char_count++;
			i++;
		}
		array[j] = (char *)malloc((char_count + 1) * sizeof(char));
		j++;
		char_count = 0;
		while (is_spacetabnew(str[i]) && i < len)
			i++;	
	}
	array[j] = 0;
	return (array);
}

char **fill_matrix(char **array, char *str, int len)
{
	int i = 0;
	int j = 0;
	int k;

	while (str[i])
	{
		k = 0;
		while (!is_spacetabnew(str[i]) && i < len)
		{
			array[j][k] = str[i];
			i++;
			k++;
		}
		array[j][k] = '\0';
		j++;
		while (is_spacetabnew(str[i]) && i < len)
			i++;	
	}
	return (array);
}

char **rostring(char *str)
{
	int wc;
	char **array;
	int len = 0;

	while (str[len])
		len++;
	wc = word_count(str, len);
	array = create_matrix(str, wc, len);
	return (array = fill_matrix(array, str, len));
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		int j;
		char **array;

		array = rostring(argv[1]);
		while (array[i])
			i++;
		i--;
		while (i > 0)
		{
			j = 0;
			while (array[i][j])
			{
				write(1, &array[i][j], 1); 	
				j++;
			}
			// if (i != 0)
			write(1, " ", 1);
			i--;
		}
		j = 0;
		while(array[0][j])
		{
			write(1, &array[0][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
