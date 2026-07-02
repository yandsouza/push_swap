/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccaval <luccaval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:54:53 by ynascime          #+#    #+#             */
/*   Updated: 2026/07/01 23:14:55 by luccaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack)
{
	t_node	*node;

	if (stack->top)
		node = stack->top;
	else
		node = stack->bottom;
	while (node)
	{
		printf("content: %d | index: %d\n", node->content, node->index);
		node = node->next;
	}
	printf("stack size: %d\n", stack->size);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		strategy;

	if (argc == 1)
		return (0);
	stack_init(&stack_a);
	stack_init(&stack_b);
	if (parser(argc, argv, &stack_a, &strategy))
		return (1);
	printf("The disorder is %.2f\n", compute_disorder(&stack_a));
	printf("Stack a:\n");
	print_stack(&stack_a);
	printf("-------------------\n");
	//selection_sort(&stack_a, &stack_b);
	chunk_sort(&stack_a, &stack_b);
	printf("Stack a ordered:\n");
	print_stack(&stack_a);
	printf("-------------------\n");
	return (0);
}
