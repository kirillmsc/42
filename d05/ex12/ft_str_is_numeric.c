/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:51:23 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 22:51:24 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ('0' <= *str && *str <= '9')
		{
			str++;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}