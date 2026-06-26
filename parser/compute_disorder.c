/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 17:20:56 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/26 18:59:24 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *stack_one)
{
	t_node	*node_one;
	t_node	*node_two;
	double	mistakes;
	double	total_pairs;

	if (!stack_one || stack_one->size < 2)
		return (0);
	mistakes = 0;
	total_pairs = 0;
	node_one = stack_one->top;
	while (node_one)
	{
		node_two = node_one->next;
		while (node_two)
		{
			if (node_one->content > node_two->content)
				mistakes++;
			total_pairs++;
			node_two = node_two->next;
		}
		node_one = node_one->next;
	}
	return (mistakes / total_pairs);
}
