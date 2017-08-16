/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:31:20 by caroua            #+#    #+#             */
/*   Updated: 2017/08/13 17:49:24 by caroua           ###   ########.fr       */
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
		return (i);
	}
	if (nb >= 2000000000)
	{
		i = 44700;
		while (i * i < nb && i < 47000)
			i++;
		return (i);
	}
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb >= 2)
	{
		while (i <= ft_sqrt(nb))
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
