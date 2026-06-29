#include "push_swap.h"

int return_index(t_stack *stack_a)
{
    t_node  *current;
    int     min;
    int     index;
    int     i;

    current = stack_a->top; 
    min = current->index;
    index = 0;
    i = 0;
    while(current != NULL)
    {
        if (current->index < min)
        {
            min = current->index;
            index = i;
        }
        i++;
        current = current->next;
    }

    return(index);
}

void    rotate_f(int i, void (*function)(t_stack*), t_stack *stack_a)
{
    while (i > 0)
    {
        function(stack_a);
        i--;
    }
}

void selection_sort(t_stack *stack_a, t_stack * stack_b)
{
    int min;

   while (stack_a->size > 1)
   {
        min = return_index(stack_a);

        if(min <= stack_a->size/2)
            rotate_f(min, ra, stack_a);
        else
            rotate_f((stack_a->size - min), rra, stack_a);
        pb(stack_a, stack_b);
   }
   while(stack_b->size > 0)
        pa(stack_a, stack_b);
}
