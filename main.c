/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:54:53 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/18 18:09:03 by ynascime         ###   ########.fr       */
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
	int		i;

	if (argc == 1)
		return (0);
	stack_init(&stack_a);
	stack_init(&stack_b);
	i = 1;
	while (i < argc)
	{
		push_stack(&stack_a, atoi(argv[i]));
		i++;
	}
	printf("Stack a:\n");
	print_stack(&stack_a);
	printf("Stack b:\n");
	print_stack(&stack_b);
	printf("-------------------\n");
	push(&stack_a, &stack_b);
	printf("Stack a after push:\n");
	print_stack(&stack_a);
	printf("Stack b after push:\n");
	print_stack(&stack_b);
	printf("-------------------\n");
	push(&stack_a, &stack_b);
	printf("Stack a after push:\n");
	print_stack(&stack_a);
	printf("Stack b after push:\n");
	print_stack(&stack_b);
	printf("-------------------\n");
	push(&stack_a, &stack_b);
	printf("Stack a after push:\n");
	print_stack(&stack_a);
	printf("Stack b after push:\n");
	print_stack(&stack_b);
	return (0);
}
