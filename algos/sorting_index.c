/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccaval <luccaval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 22:25:29 by luccaval          #+#    #+#             */
/*   Updated: 2026/07/01 22:54:57 by luccaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void     sort(int *array, int size)
{
    int swap;
    int i;
    int j;
    
    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (array[i] > array[j])
                {
                    swap = array[i];
                    array[i] = array[j];
                    array[j] = swap;
                }
            j++;
        }
        i++;
    }
}

static int find_index(int *array, int size, int value)
{
    int beg;
    int med;
    int end;

    beg = 0;
    end = size - 1;
    while (beg <= end)
    {
        med = (beg + end) / 2;
        if (array[med] == value)
            return (med);
        else if (array[med] < value)
            beg = med + 1;
        else
            end = med - 1; 
    }
    return (-1);
}

static void    sort_index(int *array, t_node *current, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        current->index = find_index(array, size, current->content);
        current = current->next;
        i++;
    }
}

void    ranking_index(t_stack *stack_a)
{
    t_node  *current;
    int *array;
    int i;

    array = malloc((stack_a->size) * sizeof(int));
    if (!array)
        return ;
    current = stack_a->top;
    i = 0;
    while (i < stack_a->size)
    {
        array[i] = current->content;
        current = current->next;
        i++;
    }
    sort(array, stack_a->size);
    current = stack_a->top;
    sort_index(array, current, stack_a->size);
    free(array);
}