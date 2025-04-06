/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Returns an arr of arr defined by a separator.                          */
/* ************************************************************************** */
#include "justlib.h"

// ----------------------------------PROTOTYPE--------------------------------
char			**ft_split(const char *s, const char *sep);
static int		ft_count_words(const char *s, const char *sep);
static char		**ft_split_next(char **out, const char *s, const char *sep);
static char		**ft_split_error(char **out, int k);
// ---------------------------------------------------------------------------

char	**ft_split(const char *s, const char *sep)
{
	int			wc;
	char		**out;

	if (!s)
		return (NULL);
	wc = ft_count_words(s, sep);
	if (!wc)
		return (NULL);
	out = ft_calloc(wc + 1, sizeof(char *));
	if (!out)
		return (NULL);
	return (ft_split_next(out, s, sep));
}

static int	ft_count_words(const char *s, const char *sep)
{
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] && ft_is_separator(s[i], sep))
			i++;
		if (s[i])
			wc++;
		while (s[i] && !ft_is_separator(s[i], sep))
			i++;
	}
	return (wc);
}

static char	**ft_split_next(char **out, const char *s, const char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && ft_is_separator(s[i], sep))
			i++;
		j = i;
		while (s[i] && !ft_is_separator(s[i], sep))
			i++;
		if (i > j)
		{
			out[k] = ft_calloc(i - j + 1, sizeof(char));
			if (!out[k])
				return (ft_split_error(out, k));
			ft_strncpy(out[k++], s + j, i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

static char	**ft_split_error(char **out, int k)
{
	int		f;

	f = 0;
	while (f < k)
	{
		free(out[f]);
		f++;
	}
	free(out);
	return (NULL);
}
