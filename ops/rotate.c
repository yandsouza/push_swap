/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:21:44 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/23 15:05:53 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	stack->top = stack->bottom;
	stack->bottom = node;
	stack->top->next = node->next;
	stack->bottom->prev = stack->top->prev;
	stack->bottom->prev->next = stack->bottom;
	stack->top->prev = NULL;
	stack->bottom->next = NULL;
}
