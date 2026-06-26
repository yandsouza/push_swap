/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:35 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/26 17:07:12 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse(t_stack *stack)
{
    t_node  *node;

    if (!stack || stack->size < 2)
        return ;
    node = stack->bottom;
    stack->bottom = node->prev;
    stack->bottom->next = NULL;
    node->next = stack->top;
    stack->top->prev = node;
    node->prev = NULL;
    stack->top = node;
}

void	rra(t_stack *stack_a)
{
	reverse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	reverse(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	write(1, "rrr\n", 4);
}
