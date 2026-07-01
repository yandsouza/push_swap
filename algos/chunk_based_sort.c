/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccaval <luccaval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:15:53 by luccaval          #+#    #+#             */
/*   Updated: 2026/07/01 01:16:18 by luccaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void     sort(int *array, int size)
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

void    sort_index(int *array, t_node *current, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (current->content == array[j])
            {
                current->index = j;
                break;
            }
            j++;
        }
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

int exists_in_chunk(t_stack *stack_a, int upper_limit)
{
    t_node  *node;
    
    node = stack_a->top;
    while (node)
    {
        if (node->index <= upper_limit)
            return 1;
        node = node->next;
    }
    return 0;
}

int	max_position(t_stack *stack_b)
{
	t_node	*current;
	int		max;
	int		index;
	int		i;

	current = stack_b->top;
	max = current->index;
	index = 0;
	i = 0;
	while (current != NULL)
	{
		if (current->index > max)
		{
			max = current->index;
			index = i;
		}
	i++;
	current = current->next;
	}
	return (index);
}

void    chunk_sort(t_stack *stack_a, t_stack *stack_b)
{
    int     chunk_count;
    int     chunk_width;
    int     upper_limit;

    ranking_index(stack_a);
    if (stack_a->size <= 100)
        chunk_count = 5;
    else
        chunk_count = 11;
    chunk_width = (int)(stack_a->size/chunk_count);
    upper_limit = chunk_width - 1;
    while (stack_a->size > 0)
    {
        if (stack_a->top->index <= upper_limit)
            pb(stack_a, stack_b);
        else
            ra(stack_a);

        if (!(exists_in_chunk(stack_a, upper_limit)))
            upper_limit += chunk_width;
    }
    int size_b;
    int index_max;
    
    size_b = stack_b->size - 1;
    while (stack_b->size > 0)
    {
        if (stack_b->top->index != size_b)
        {
            index_max = max_position(stack_b);
            if (index_max > stack_b->size/2)
                rrb(stack_b);
            else
                rb(stack_b);
        }
        else
        {
            pa(stack_a,stack_b);
            size_b--;
        }
    }
}
