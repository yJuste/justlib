/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Add a new node at the back.                                            */
/* ************************************************************************** */
#include "justlib.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*tmp;

	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
