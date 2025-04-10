/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_chr_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Sort array by comparing the ascii.                                     */
/* ************************************************************************** */
#include "justlib.h"

char	**ft_sort_chr_tab(char **strs)
{
	int			i;
	char		*tmp;

	if (!strs && !strs[0])
		return (NULL);
	i = 0;
	while (strs[i] && strs[i + 1])
	{
		if (ft_strcmp(strs[i], strs[i + 1]) > 0)
		{
			tmp = strs[i];
			strs[i] = strs[i + 1];
			strs[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (strs);
}
