/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:21:44 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 01:44:38 by ynascime         ###   ########.fr       */
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
