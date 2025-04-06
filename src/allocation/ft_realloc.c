/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Reallocates memory.                                                    */
/* ************************************************************************** */
#include "justlib.h"

void	*ft_realloc(void *ptr, int old, int new)
{
	void		*nptr;

	if (!ptr)
		return (ft_calloc(1, new));
	if (!new)
		return (free(ptr), NULL);
	nptr = ft_calloc(1, new);
	if (!nptr)
		return (NULL);
	if (old < new)
		ft_memcpy(nptr, ptr, old);
	else
		ft_memcpy(nptr, ptr, new);
	free(ptr);
	return (nptr);
}
