/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 17:20:56 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/26 18:43:58 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float compute_disorder(t_stack *stack_one)
{
	t_node	*node_one;
	t_node	*node_two;
	int		mistakes;
	int		total_pairs;

	mistakes = 0;
	total_pairs = 0;
	node_one = stack_one->top;
	while (node_one)
	{
		node_two = stack_one->top;
		while (node_two)
		{
			if (node_one->content > node_two->content)
				mistakes += 1;
			total_pairs += 1;
			node_two = node_two->next;
		}
		node_one = node_one->next;
	}
	return (mistakes / total_pairs);
}
