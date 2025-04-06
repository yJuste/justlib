/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Concates 2 arr.                                                        */
/* ************************************************************************** */
#include "justlib.h"

char	**ft_strsjoin(const char **s1, const char **s2)
{
	int			i;
	int			j;
	char		**str;

	if (!s1 && !s2)
		return (NULL);
	str = ft_calloc(ft_strslen(s1) + ft_strslen(s2) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			str[i] = ft_strdup(s1[i]);
			i++;
		}
	}
	j = 0;
	if (s2)
		while (s2[j])
			str[i++] = ft_strdup(s2[j++]);
	str[i] = NULL;
	return (str);
}
