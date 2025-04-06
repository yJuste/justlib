/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Frees a double array of int/chars.                                     */
/* ************************************************************************** */
#include "justlib.h"

void	ft_free_array(void ***arr, int len, char char_or_int)
{
	int		i;

	i = 0;
	if (!arr || !*arr || (char_or_int == 'i' && len == 0))
		return ;
	if (char_or_int == 'c')
	{
		while ((*arr)[i])
		{
			free((*arr)[i]);
			(*arr)[i] = NULL;
			i++;
		}
	}
	else if (char_or_int == 'i')
	{
		while (i < len)
		{
			free((*arr)[i]);
			(*arr)[i] = NULL;
			i++;
		}
	}
	free(*arr);
	*arr = NULL;
}
