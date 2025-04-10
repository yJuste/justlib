/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Copies an arr from an another.                                         */
/* ************************************************************************** */
#include "justlib.h"

char	**ft_strscpy(char **dst, const char **src)
{
	int		i;

	i = 0;
	if (!src || !src[0])
		return (NULL);
	while (src[i])
	{
		dst[i] = ft_strdup((const char *)src[i]);
		i++;
	}
	dst[i] = NULL;
	return (dst);
}
