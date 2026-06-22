/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:56:26 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/22 16:56:27 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void indexer(t_stack *stack_one)
{
	int index;
	t_node *node_one;
	t_node *node_two;

	node_one = stack_one->top;
	while(node_one)
	{
		node_two = stack_one->top;
		index = 0;
		while (node_two)
		{
			if (node_one->content > node_two->content)
				index++;
			node_two = node_two->next;
		}
		node_one->index = index;
		node_one = node_one->next;
	}
}
