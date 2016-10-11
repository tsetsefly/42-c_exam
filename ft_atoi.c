#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int ft_atoi(char *nb)
{
	int i;
	int neg;
	long num;

	i = 0;
	while (nb[i] < 33)
		i++;
	neg = 1;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			neg *= -1;
		i++;
	}
	num = 0;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		num = num * 10 + nb[i] - '0';
		i++;
	}
	return (num * neg);
}

int main ()
{
	char *nb = "2147483647";
	// 2147483648

	ft_putstr("ft_atoi: ");
	ft_putnbr(ft_atoi(nb));
	ft_putchar('\n');
}