/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:56:26 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 17:56:03 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexer(t_stack *stack_one)
{
	t_node	*node_one;
	t_node	*node_two;

	node_one = stack_one->top;
	while (node_one)
	{
		node_two = stack_one->top;
		index = 0;
		while (node_two)
		{
			if (node_one->content == node_two->content)
				return (1);
			node_two = node_two->next;
		}
		node_one->index = index;
		node_one = node_one->next;
	}
	return (0);
}
