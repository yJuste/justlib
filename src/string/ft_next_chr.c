/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_chr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Look for `chr` and return its position.                                */
/* ************************************************************************** */
#include "justlib.h"

int	ft_next_chr(const char *s, const char chr, int n)
{
	int		i;

	i = 0;
	if (n <= -1)
		return (-1);
	while (s[i])
	{
		if (s[i] == chr)
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
