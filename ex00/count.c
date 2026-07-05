/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:47:05 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 18:47:12 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_left_to_right(int col, int **matrix)
{
	int	j;
	int	max;
	int	cnt;

	j = 0;
	max = 0;
	cnt = 0;
	while (j < 4)
	{
		if (matrix[col][j] > max)
		{
			max = matrix[col][j];
			cnt++;
		}
		j++;
	}
	return (cnt);
}

int	ft_count_right_to_left(int col, int **matrix)
{
	int	j;
	int	max;
	int	cnt;

	j = 3;
	max = 0;
	cnt = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > max)
		{
			max = matrix[col][j];
			cnt++;
		}
		j--;
	}
	return (cnt);
}

int	ft_count_top_to_bottom(int col, int **matrix)
{
	int	j;
	int	max;
	int	cnt;

	j = 0;
	max = 0;
	cnt = 0;
	while (j < 4)
	{
		if (matrix[col][j] > max)
		{
			max = matrix[col][j];
			cnt++;
		}
		j++;
	}
	return (cnt);
}

int	ft_count_bottom_to_top(int col, int **matrix)
{
	int	j;
	int	max;
	int	cnt;

	j = 3;
	max = 0;
	cnt = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > max)
		{
			max = matrix[col][j];
			cnt++;
		}
		j--;
	}
	return (cnt);
}
