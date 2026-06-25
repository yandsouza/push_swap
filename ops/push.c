/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 00:14:14 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 16:29:55 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
