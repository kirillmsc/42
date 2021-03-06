/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 22:25:12 by rkiwi             #+#    #+#             */
/*   Updated: 2020/01/31 23:35:53 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int i;
	char rev_str[i];
	int j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (i != 0)
	{
		str--;
		rev_str[j] = *str;
		i--;
		j++;
	}
	return (rev_str);
}
