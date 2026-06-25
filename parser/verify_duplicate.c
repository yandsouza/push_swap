/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:56:26 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 18:27:51 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_duplicate(t_stack *stack_one)
{
	t_node	*node_one;
	t_node	*node_two;

	node_one = stack_one->top;
	while (node_one)
	{
		node_two = node_one->next;
		while (node_two)
		{
			if (node_one->content == node_two->content)
				return (1);
			node_two = node_two->next;
		}
		node_one = node_one->next;
	}
	return (0);
}
