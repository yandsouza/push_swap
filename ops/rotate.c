/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:21:44 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 17:12:07 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_stack *stack)
{
    t_node  *node;

    if (!stack)
        return ;
    node = stack->top;
    stack->top = node->next;
    stack->top->prev = NULL;
    node->prev = stack->bottom;
    stack->bottom->next = node;
    node->next = NULL;
    stack->bottom = node;
}

void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
