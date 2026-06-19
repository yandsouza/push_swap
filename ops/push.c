/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 00:14:14 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/18 21:40:32 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *stack_one, t_stack *stack_two)
{
	t_node	*node;

	if (stack_one->size == 0)
		return ;
	node = stack_one->top;
	stack_one->top = node->next;
	if (stack_one->top)
		stack_one->top->prev = NULL;
	else
		stack_one->bottom = NULL;
	stack_one->size--;
	node->next = stack_two->top;
	node->prev = NULL;
	if (stack_two->size == 0)
		stack_two->bottom = node;
	else
		stack_two->top->prev = node;
	stack_two->top = node;
	stack_two->size++;
}
