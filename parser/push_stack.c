/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 22:27:40 by ynascime          #+#    #+#             */
/*   Updated: 2026/07/01 13:52:36 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_stack(t_stack *stack, int content)
{
	t_node	*new;

	new = node_add(content);
	if (!new)
		return (1);
	if (stack->size == 0)
	{
		stack->top = new;
		stack->bottom = new;
	}
	else
	{
		new->prev = stack->bottom;
		stack->bottom->next = new;
		stack->bottom = new;
	}
	stack->size++;
	return (0);
}
