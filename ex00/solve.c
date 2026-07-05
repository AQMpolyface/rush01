#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int	ft_verify_col(int col, int *input, int **matrix)
{
	int	right;
	int	left;
	int	biggest;
	int	right_increment;
	int	left_increment;
	int	j;

	biggest = 0;
	right_increment = 0;
	left_increment = 0;
	right = input[col + 8];
	left = input[col + 12];
	j = 0;
	while (j < 4)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			right_increment++;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			left_increment++;
		}
		j--;
	}
	return (right_increment == right) && (left_increment == left);
}

int	ft_verify_column(int col, int *input, int **matrix)
{
	int	i;
	int	biggest;
	int	top;
	int	bottom;
	int	top_increment;
	int	bottom_increment;
	int	j;
	int	contains_null;

	contains_null = 0;
	i = 0;
	biggest = 0;
	top_increment = 0;
	bottom_increment = 0;
	top = input[col];
	bottom = input[col + 4];
	j = 0;
	while (j < 4)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			top_increment++;
		}
		if (matrix[col][j] == 0)
		{
			contains_null = 1;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[col][j] > biggest)
		{
			biggest = matrix[col][j];
			bottom_increment++;
		}
		j--;
	}
	return ((top_increment == top) && (bottom_increment == bottom)
		&& !contains_null);
}

int	ft_is_board_filled(int **matrix)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (matrix[i][j] == 0)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	ft_is_valid_board(int *input, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (!ft_verify_column(i, input, matrix))
		{
			return (FALSE);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!ft_verify_col(i, input, matrix))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	ft_is_num_in_row(int y, int val, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[y][i] == val)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int	ft_is_num_in_col(int x, int val, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[i][x] == val)
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void	ft_find_empty_square(int *x, int *y, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 0)
			{
				*x = j;
				*y = i;
				return ;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	ft_is_valid_move(int x, int y, int val, int **matrix, int *input)
{
	if (ft_is_num_in_col(x, val, matrix) || ft_is_num_in_row(y, val, matrix))
	{
		return (FALSE);
	}
	return (TRUE);
}

int	solve(int *input, int **matrix, int x, int y)
{
	int	i;
	int	j;

	if (ft_is_valid_board(input, matrix))
		return (TRUE);
	if (x == 4 && y == 3)
	{
		return (TRUE);
	}
	if (x == 4)
	{
		if (ft_verify_col(y, input, matrix))
		{
			if (solve(input, matrix, 0, y + 1))
				return (TRUE);
		}
		else
			return (FALSE);
		y++;
		x = 0;
	}
	i = 1;
	while (i <= 4)
	{
		if (ft_is_valid_move(x, y, i, matrix, input))
		{
			matrix[y][x] = i;
			if (solve(input, matrix, x + 1, y))
				return (TRUE);
			matrix[y][x] = 0;
		}
		i++;
	}
	return (FALSE);
}
