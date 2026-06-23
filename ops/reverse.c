/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:35 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/23 18:39:49 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_stack *stack)
{
	t_node	*node;

	if (!stack)
		return ;
	node = stack->bottom;
	node->next = stack->top;
	stack->top = node;
	stack->bottom = node->prev;
	stack->top->prev = NULL;
	stack->bottom->next = NULL;
}

//void	old_rotate(t_stack *stack)
//{
//	t_node	*node;
//
//	node = stack->top;
//	stack->top = stack->bottom;
//	stack->bottom = node;
//	stack->top->next = node->next;
//	stack->bottom->prev = stack->top->prev;
//	stack->bottom->prev->next = stack->bottom;
//	stack->top->prev = NULL;
//	stack->bottom->next = NULL;
//}
