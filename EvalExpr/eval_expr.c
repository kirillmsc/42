#include "header.h"

// struct list * addelem(t_list *lst, int number)
// {
// 	struct list *temp, *p;
// 	temp = (struct list*)malloc(sizeof(t_list));
// 	p = lst->next;
// 	lst->next = temp;
// 	temp->field = number;
// 	temp->next = p;
// 	temp->prev = lst;
// 	if (p != NULL)
// 		p->prev = temp;
// 	return(temp);
// }


int		eval_expr(char *av)
{
	char a;
	char b;
	char c;
	char *tmp;
	// t_list *list;

	a = ' ';
	b = ' ';
	c = ' ';
	tmp = 0;
	while ((*av != '\0') && (a == ' ') && (b == ' ') && (c == ' '))
	{
		if (check_num(*av))
		{
			if (a == ' ')
				a = *av;
			else
				b = *av;
		}
		else if (check_sign(*av))
			c = *av;
		av++;
	}
	return (calc(a, b, c));
}
