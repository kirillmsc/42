int		check_sign(char c)
{
	if (c == '(')
		return (1);
	else if ((c == '+') || (c == '-'))
		return (2);
	else if ((c == '*') || (c == '/'))
		return (3);
	return (0);
}

int		check_num(char n)
{
	if ((n >= '0') && (n <= '9'))
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char **str)
{
	int		nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}