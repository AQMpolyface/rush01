#include <stdlib.h>

int	ft_verify_row(int row, int *input, int **matrix)
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
	left = input[row + 4];
	right = input[row + 8];
	j = 0;
	while (j < 4)
	{
		if (matrix[j][row] > biggest)
		{
			biggest = matrix[j][row];
			right_increment++;
		}
		j++;
	}
	j--;
	biggest = 0;
	while (j >= 0)
	{
		if (matrix[j][row] > biggest)
		{
			biggest = matrix[j][row];
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
		j++;
	}
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
	return (top_increment == top) && (bottom_increment == bottom);
}

int	ft_verify_board(int *input, int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_verify_column(i, input, matrix))
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!ft_verify_row(i, input, matrix))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	solve(int *input, int **matrix)
{
	if (ft_is_valid_board(input, matrix))
	{
		return (1);
	}
}
