/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 00:14:14 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/18 18:24:09 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *stack_one, t_stack *stack_two)
{
	t_node	*node;

	node = stack_one->top;
	if (stack_two->size == 0)
	{
		stack_two->top = node;
		stack_two->bottom = node;
		stack_one->top = node->next;
		stack_one->top->prev = NULL;
		stack_two->bottom->next = NULL;
		stack_two->size++;
		stack_one->size--;
	}
	else
	{
		stack_two->top = node;
		stack_one->top = node->next;
		stack_two->top->next = stack_two->bottom;
		stack_two->size++;
		stack_one->size--;
	}
}

//void	push(t_stack *stack_one, t_stack *stack_two)
//{
//	t_node node;
//
//	node = stack_one->top;
//}
