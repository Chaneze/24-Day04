/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:03:08 by caroua            #+#    #+#             */
/*   Updated: 2017/08/09 16:09:11 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int j;

	x = 1;
	j = nb;
	if (j >= 1 && j < 13)
	{
		while (x < j)
		{
			nb = nb * x;
			x++;
		}
		return (nb);
	}
	if (j == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
