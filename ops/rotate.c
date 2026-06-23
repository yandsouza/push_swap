/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:21:44 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/23 16:53:11 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	node->prev = stack->bottom->prev;
	stack->bottom->next = node;
	stack->bottom = node;
	stack->top = node->next;
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
