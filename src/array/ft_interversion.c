/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Move X elements to Y position to Z amplitude.                          */
/* ************************************************************************** */
#include "justlib.h"

// ---------------------------------PROTOTYPE----------------------------------
int			ft_interversion(char **arg, int src, int dst, int range);
static void	ft_apply(char **arg, int src, int dst, int range);
// ----------------------------------------------------------------------------

// On prend l'élément src, on va l'insérer à la position dst sans toucher à
// l'ordre du tableau. La range permet de spécifier le nombre d'arguments à
// insérer après la src, donc si range = 2, alors on va déplacer src et src + 1
// à dst et dst + 1.
// ex: arg = {a, b, c, D, E, f, g, h};
// ft_interversion(arg, 3, 0, 2);
// devient -> arg = {D, E, a, b, c, f, g, h};
int	ft_interversion(char **arg, int src, int dst, int range)
{
	int			i;
	int			size;
	char		**tmp;

	size = ft_strslen((const char **)arg);
	if (src < 0 || src >= size || dst < 0 || dst >= size
		|| range <= 0 || src + range > size)
		return (-1);
	tmp = ft_calloc(range + 1, sizeof(char *));
	i = 0;
	while (i < range)
	{
		tmp[i] = arg[src + i];
		i++;
	}
	tmp[range] = NULL;
	ft_apply(arg, src, dst, range);
	i = 0;
	while (i < range)
	{
		arg[dst + i] = tmp[i];
		i++;
	}
	return (free(tmp), 0);
}

static void	ft_apply(char **arg, int src, int dst, int range)
{
	int		i;

	i = 0;
	if (src < dst)
	{
		i = src;
		while (i < dst)
		{
			arg[i] = arg[i + range];
			i++;
		}
	}
	else
	{
		i = src - 1;
		while (i >= dst)
		{
			arg[i + range] = arg[i];
			i--;
		}
	}
}
