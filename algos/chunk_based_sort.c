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
    int j;

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

void	rotate_f(int i, void (*function)(t_stack*), t_stack *stack_a)
{
	while (i > 0)
	{
		function(stack_a);
		i--;
	}
}

void    find_closet(t_stack *stack_a, t_node *current, int upper_limit)
{
    int dist;
    int i;

    i = 0;
    dist = 0;
    while (i < stack_a->size)
    {
        if (current->index <= upper_limit)
        {
            if (dist <= (int)(stack_a->size / 2))
                rotate_f(dist, ra, stack_a);
            else
                rotate_f((stack_a->size - dist), rra, stack_a);
        }
        current = current->next;
        dist++;
        i++;
    }
}

void    chunk_sort(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *current;
    int     chunk_count;
    int     chunk_width;
    int     upper_limit;

    ranking_index(stack_a);
    if (stack_a->size <= 100)
        chunk_count = 5;
    else
        chunk_count = 11;
    chunk_width = (int)(stack_a->size/chunk_count);
    
    int size;
    int j;

    upper_limit = chunk_width - 1;
    while(stack_a->size > 0)
    {
        current = stack_a->top;
        size = stack_a->size;
        j = 0;
        while (j < size)
        {
            if (stack_a->top->index <= upper_limit)
                pb(stack_a, stack_b);
            else
            {
                ra(stack_a);
            }
            current = current->next;
            j++;
        }
        upper_limit += chunk_width;
    }
}