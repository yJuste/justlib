/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Finds the last occurence of a string.                                  */
/* ************************************************************************** */
#include "justlib.h"

char	*ft_strrstr(const char *haystack, const char *needle)
{
	int			i;
	int			j;
	char		*last;

	last = NULL;
	if (!*needle)
	{
		while (*haystack)
			haystack++;
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (!needle[j])
			last = (char *)(haystack + i);
		i++;
	}
	return (last);
}
