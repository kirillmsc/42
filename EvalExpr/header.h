#ifndef HEADER_H
# define HEADER_H

int		check_sign(char c);
int		check_num(char n);
int		eval_expr(char *av);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		calc(char a, char b, char c);

struct				s_list 
{
	char			data;
	struct s_list*	next;
	struct s_list*	prev;
	
}					t_list;

#endif