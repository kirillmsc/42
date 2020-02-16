#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

int		check_sign(char c);
int		check_num(char n);
int		eval_expr(char *av);
int		ft_atoi(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		calc(char a, char b, char c);

typedef	struct		s_list 
{
	char			data;
	struct s_list	*next;
	struct s_list	*prev;
	
}					t_list;

#endif