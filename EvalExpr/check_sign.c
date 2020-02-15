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