/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:51:10 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 17:51:12 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] < s2[i])
		{
			return (-1 * (s2[i] - s1[i]));
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
