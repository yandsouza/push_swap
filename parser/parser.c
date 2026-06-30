/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:11:33 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/30 14:20:23 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parser(int argc, char **argv, t_stack *stack_a)
{
	int i;

	i = 1;
	while (i < argc)
	{
		push_stack(stack_a, ft_atoi(argv[i]));
		i++;
	}
	if (verify_duplicate(stack_a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	indexer(stack_a);
	return (0);
}
