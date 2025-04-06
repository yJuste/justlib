/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Displays the arguments from a double str.                              */
/* ************************************************************************** */
#include "justlib.h"

void	ft_print_args(const char *title, char **arg)
{
	int		i;

	i = 0;
	printf("--- %s ---\n", title);
	if (!arg)
		printf("attention arg n'existe pas!\n");
	else if (!arg[i])
		printf("attention arg[0] n'existe pas!\n");
	else
	{
		while (arg[i])
		{
			printf("arg[%d] = \"%s\"\n", i, arg[i]);
			i++;
		}
	}
	printf("--- EOF ---\n");
}
