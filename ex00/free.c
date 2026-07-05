/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjonas <mjonas@students.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:06:17 by mjonas            #+#    #+#             */
/*   Updated: 2026/07/05 20:13:16 by mjonas           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_all(int *input, int **matrix)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(matrix[i]);
	free(matrix);
	free(input);
}
