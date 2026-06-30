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

void    chunk_sort(t_stack *stack_a, t_stack *stack_b)
{
    ranking_index(stack_a);
    
}