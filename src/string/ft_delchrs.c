/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delchrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Deletes the specified characters from a string.                        */
/* ************************************************************************** */
#include "justlib.h"

// ⚠️  Returns a new str.
char	*ft_delchrs(char *s, const char *chrs)
{
	int			i;
	int			j;
	char		*new;

	i = 0;
	j = 0;
	while (s[i])
		if (ft_is_separator(s[i++], chrs) == 0)
			j++;
	new = ft_calloc(j + 1, sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (ft_is_separator(s[i], chrs) == 0)
			new[j++] = s[i];
		i++;
	}
	free(s);
	return (new);
}
