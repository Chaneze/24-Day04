/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:39:02 by caroua            #+#    #+#             */
/*   Updated: 2017/08/09 23:00:43 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_dame[8];

void	ft_putchar(char c);

void	ft_putcombinaison(void)
{
	int i;
	int j;

	i = 1;
	while (i <= 8)
	{
		j = 1;
		while (j <= 8)
		{
			if (j == g_dame[i])
				ft_putchar(j + '0');
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

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
		ft_putcombinaison();
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

int		ft_eight_queens_puzzle_2(void)
{
	int n;

	n = 1;
	ft_place_queen(n);
	return (0);
}
