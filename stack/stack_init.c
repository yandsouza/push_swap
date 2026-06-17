/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:58:49 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/17 17:33:48 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void stack_init(t_stack *stack)   
{
	stack->size = 0;
	stack->top = NULL;
	stack->bottom = NULL;
}
