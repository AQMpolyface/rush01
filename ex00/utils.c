#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_input(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(matrix[i] + '0');
		ft_putchar(' ');
		i++;
	}
}

void	ft_print_matrix(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(matrix[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}

int	**ft_alloc_matrix(/*int *input*/)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = malloc(sizeof(int *) * 4);
	if (!matrix)
	{
		ft_putstr("error while allocating matrix");
		return (NULL);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		matrix[i] = malloc(sizeof(int) * 4);
		if (!matrix)
		{
			ft_putstr("error while allocating matrix row ");
			ft_putchar(i + '0');
			ft_putchar('\n');
			return (NULL);
		}
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}
