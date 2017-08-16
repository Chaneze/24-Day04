/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:57:06 by caroua            #+#    #+#             */
/*   Updated: 2017/08/09 23:00:18 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_combinaison = 0;
int g_dame[8];

int		ft_free_queen(int i, int n)
{
	int k;

	k = 1;
	while (k < n)
	{
		if (g_dame[k] == i || g_dame[k] - i == k - n || g_dame[k] - i == n - k)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

void	ft_place_queen(int n)
{
	int i;

	i = 1;
	if (n > 8)
	{
		g_combinaison++;
	}
	while (i <= 8)
	{
		if (ft_free_queen(i, n) == 1)
		{
			g_dame[n] = i;
			ft_place_queen(n + 1);
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int n;

	n = 1;
	ft_place_queen(1);
	return (g_combinaison);
}
