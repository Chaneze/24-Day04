/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:14:56 by caroua            #+#    #+#             */
/*   Updated: 2017/08/12 08:54:28 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;
	int j;

	x = 1;
	j = nb;
	if (power > 0)
	{
		while (x < power)
		{
			nb = nb * j;
			x++;
		}
		return (nb);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
