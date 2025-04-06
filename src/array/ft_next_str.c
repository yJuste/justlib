/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Look for `to_look` and return its position.                            */
/* ************************************************************************** */
#include "justlib.h"

int	ft_next_str(const char **arg, const char *to_look, int n)
{
	int		i;

	i = 0;
	if (n <= -1)
		return (-1);
	while (arg[i])
	{
		if (ft_strcmp(arg[i], to_look) == 0)
		{
			n--;
			if (n)
			{
				i++;
				continue ;
			}
			return (i);
		}
		i++;
	}
	return (-1);
}
