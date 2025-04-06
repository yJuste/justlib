/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Print the list.                                                        */
/* ************************************************************************** */
#include "justlib.h"

// can add any other type in the line 6.
// Be careful, using printf !!!
void	ft_lstprint(t_list *list)
{
	while (list)
	{
		printf("%c -> ", *(char *)list->content);
		list = list->next;
	}
	printf("NULL\n");
}
