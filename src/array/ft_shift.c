/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Move X elements from the right to the left.                            */
/* ************************************************************************** */
#include "justlib.h"

// Fonction qui supprimer les arguments src a src + range, et va décaler
// tous les arguments à `src` position de droite vers la gauche de `range`.
char	**ft_shift(char **arg, int src, int range)
{
	int		i;
	int		j;

	i = 0;
	while (i < range && arg[src + i])
	{
		if (arg[src + i])
			ft_free(&arg[src + i], NULL, NULL, NULL);
		i++;
	}
	i = 0;
	while (arg[src + range + i])
	{
		arg[src + i] = arg[src + range + i];
		i++;
	}
	j = 0;
	while (j < range)
	{
		arg[src + i + j] = NULL;
		j++;
	}
	if (!arg[0])
		arg = NULL;
	return (arg);
}
