/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:28:25 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 16:41:58 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node *node;
	
	if (stack->size <= 1)
		return ;
	node = stack->top;
	stack->top = node->next;
	stack->top->prev = NULL;
	node->prev = stack->top;
	node->next = stack->top->next;
	stack->top->next = node;
}
