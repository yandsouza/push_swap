/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:35 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/25 01:46:48 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse(t_stack *stack)
{
    t_node  *node;

    if (!stack)
        return ;
    node = stack->bottom;
    stack->bottom = node->prev;
    stack->bottom->next = NULL;
    node->next = stack->top;
    stack->top->prev = node;
    node->prev = NULL;
    stack->top = node;
}
