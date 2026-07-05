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
	matrix_i = -1;
	while (str[++i])
	{
		if (ft_is_whitespace(str[i]))
			continue ;
		else if (str[i] >= '0' && str[i] <= '9')
			matrix[++matrix_i] = str[i] - '0';
		else
		{
			ft_putstr("invalid char in input detected\n");
			return (NULL);
		}
	}
	return (matrix);
}
