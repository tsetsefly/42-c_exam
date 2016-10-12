/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 10:57:46 by exam              #+#    #+#             */
/*   Updated: 2016/10/11 10:57:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> // REMOVE LATER !!!
#include <stdlib.h>

int is_spacetabnew(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int word_count(char *str, int len)
{
	int count = 0;
	int i = 0;

	while (str[i])
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

char **ft_split(char *str)
{
	int i = 0;
	int wc = 0;
	int len;
	char **array;

	while (is_spacetabnew(str[i++]))
		;
	str = &str[i - 1];
	while (str[i])
		i++;
	len = i;
	wc = word_count(str, len);
	array = create_matrix(str, wc, len);
	return (array = fill_matrix(array, str, len));
}

// int main () // REMOVE LATER !!!
// {
// 	int i = 0;
// 	int j;
// 	char input[60] = "asdf \n\tasdf \nqwerty m mm\0";
// 	char **array;

// 	printf("*****\nINPUT->%s<-END\n*****\n", input);
// 	array = ft_split(input);
// 	while (array[i])
// 	{
// 		j = 0;
// 		while (array[i][j])
// 		{
// 			printf("%c", array[i][j]); 	
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }
