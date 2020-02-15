#include "header.h"

int		calc(char a, char b, char c)
{
	int res;

	res = 0;
	if (c == '+')
		res = ft_atoi(&a) + ft_atoi(&b);
	else if (c == '-')
		res = ft_atoi(&a) - ft_atoi(&b);
	else if (c == '*')
		res = ft_atoi(&a) * ft_atoi(&b);
	else if (c == '/')
		res = ft_atoi(&a) / ft_atoi(&b);
	else if (c == '%')
		res = ft_atoi(&a) % ft_atoi(&b);
	return (res);
}