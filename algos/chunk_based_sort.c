#include "push_swap.h"

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
    if (stack_a->size <= 5)
        chunk_count = 1;
    else if (stack_a->size <= 100)
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