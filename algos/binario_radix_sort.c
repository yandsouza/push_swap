/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binario_radix_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccaval <luccaval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 22:25:21 by luccaval          #+#    #+#             */
/*   Updated: 2026/07/01 23:14:02 by luccaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int bin_size(int size)
{
    int count;

    count = 0;
    while(size > 0)
    {
        size = size / 2;
        count++;
    }
    return (count);
}

void    binario_radix(t_stack *stack_a, t_stack *stack_b)
{   
    int max_bin;
    int count_bin;
    int size;
    int i;

    ranking_index(stack_a);
    max_bin = bin_size(stack_a->size - 1);
    count_bin = 0;
    while(count_bin < max_bin)
    {
        size = stack_a->size;
        i = 0;
        while(i < size)
        {
            if ((stack_a->top->index >> count_bin) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            i++;
        }
        while(stack_b->size > 0)
            pa(stack_a, stack_b);
        count_bin++;
    }
}