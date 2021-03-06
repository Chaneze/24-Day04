/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:26:05 by caroua            #+#    #+#             */
/*   Updated: 2017/08/13 17:51:00 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 1 && nb < 2000000000)
	{
		while (i * i < nb && i < nb / 2)
			i++;
		if (i * i == nb)
			return (i);
	}
	if (nb >= 2000000000)
	{
		i = 44700;
		while (i * i < nb && i < 47000)
			i++;
		if (i * i == nb)
			return (i);
	}
	if (nb == 1)
		return (1);
	else
		return (0);
}
