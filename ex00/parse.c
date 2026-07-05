/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:44:21 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 17:44:22 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

void	*ft_ret(char *str)
{
	ft_putstr(str);
	return (NULL);
}

int	*ft_parse_input(char *str)
{
	int	*matrix;
	int	i;
	int	matrix_i;

	matrix = malloc(sizeof(int) * 16);
	if (!matrix)
		return (ft_ret("allocation of matrix failed\n"));
	i = -1;
	matrix_i = -1;
	while (str[++i])
	{
		if (ft_is_whitespace(str[i]))
			continue ;
		else if (str[i] >= '0' && str[i] <= '9')
			matrix[++matrix_i] = str[i] - '0';
		else
			return (ft_ret("invalid char in input detected\n"));
	}
	if (matrix_i != 15)
		return (ft_ret("number of params must be 15\n"));
	return (matrix);
}
