/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Duplicates a double array of str.                                      */
/* ************************************************************************** */
#include "justlib.h"

char	**ft_strsdup(const char **s)
{
	int			i;
	int			j;
	char		**dest;

	if (!s || !*s)
		return (NULL);
	j = ft_strslen(s);
	dest = ft_calloc(j + 1, sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < j)
	{
		dest[i] = ft_strdup(s[i]);
		if (!dest[i])
		{
			j = 0;
			while (j < i)
				free(dest[j++]);
			return (free(dest), NULL);
		}
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
