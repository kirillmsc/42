#include "header.h"

t_list * init_number(char a)
{
	t_list *number;
	if (!number)
		return (0);
	number = (t_list*)malloc(sizeof(t_list));
	number->data = a;
	number->next = NULL;
	number->prev = NULL;
	return (number);
}

t_list * init_sign(char a)
{
	t_list *sign;
	if (!sign)
		return (0);
	sign = (t_list*)malloc(sizeof(t_list));
	sign->data = a;
	sign->next = NULL;
	sign->prev = NULL;
	return (sign);
}

t_list * add_num(t_list * number, char b)
{
    t_list *temp, *p;
    temp = (t_list*)malloc(sizeof(t_list));
    p = number->next;
    number->next = temp;
    temp->data = b;
    temp->next = p;
    temp->prev = number;
    if (p != NULL)
        p->prev = temp;
    return (temp);
}

t_list * add_sign(t_list * sign, char b)
{
    t_list *temp, *p;
    temp = (t_list*)malloc(sizeof(t_list));
    p = sign->next;
    sign->next = temp;
    temp->data = b;
    temp->next = p;
    temp->prev = sign;
    if (p != NULL)
        p->prev = temp;
    return (temp);
}