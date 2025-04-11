/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Add 1 element at the end of the strs.                                  */
/* ************************************************************************** */
#include "justlib.h"

char	**ft_strs_push(char **arg, char *line)
{
	int			count;
	char		**new;

	count = ft_strslen((const char **)arg);
	new = ft_realloc(arg, sizeof(char *) * count,
			sizeof(char *) * (count + 1));
	if (!new)
		return (NULL);
	new[count] = ft_strdup((const char *)line);
	new[count + 1] = NULL;
	return (new);
}
