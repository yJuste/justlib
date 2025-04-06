/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Deletes the specified strs from an array.                              */
/* ************************************************************************** */
#include "justlib.h"

int	ft_delstrs(char **arg, const char *strs)
{
	int		i;

	i = 0;
	if (!arg)
		return (1);
	while (arg[i])
	{
		if (ft_strcmp(arg[i], strs) == 0)
		{
			arg = ft_shift(arg, i, 1);
			if (!arg)
				return (1);
			continue ;
		}
		i++;
	}
	return (0);
}
