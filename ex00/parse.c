#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int	*ft_parse_input(char *str)
{
	int	*matrix;
	int	i;
	int	matrix_i;

	matrix = malloc(sizeof(int) * 16);
	if (!matrix)
	{
		ft_putstr("allocation of matrix failed\n");
		return (NULL);
	}
	i = -1;
	matrix_i = 0;
	while (str[++i])
	{
		if (ft_is_whitespace(str[i]))
			continue ;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			matrix[matrix_i] = str[i] - '0';
			matrix_i++;
		}
		else
		{
			ft_putstr("invalid char: ");
			ft_putchar(str[i]);
			ft_putstr(" at line ");
			ft_putchar(i + '0');
			ft_putchar('\n');
			return (NULL);
		}
	}
	return (matrix);
}
