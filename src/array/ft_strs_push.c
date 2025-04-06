/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Add 1 element at the end of the strs.                                  */
/* ************************************************************************** */
#include "justlib.h"

void	ft_strs_push(char ***arg, char *line)
{
	int			count;
	char		**new;

	count = ft_strslen((const char **)*arg);
	new = ft_calloc(count + 2, sizeof(char *));
	if (!new)
		return ;
	new = ft_strsdup((const char **)*arg);
	new[count] = ft_strdup((const char *)line);
	new[count + 1] = NULL;
	ft_free_array((void ***)arg, 0, 'c');
	*arg = new;
}
