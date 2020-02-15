/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:34:17 by rkiwi             #+#    #+#             */
/*   Updated: 2020/01/31 21:04:36 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int tmp_div;
	int tmp_mod;

	if (b != 0)
	{
		tmp_div = a / b;
		tmp_mod = a % b;
		div = &tmp_div;
		mod = &tmp_mod;
	}
}