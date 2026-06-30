/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:08:38 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/30 14:10:43 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//	printf("The disorder is %.2f\n", compute_disorder(&stack_a));
//	printf("Stack a:\n");
//	print_stack(&stack_a);
//	printf("-------------------\n");
//	printf("Stack b:\n");
//	print_stack(&stack_b);
//	printf("-------------------\n");

//	sa(&stack_a);	
//	pb(&stack_a, &stack_b);
//	pb(&stack_a, &stack_b);
//	pb(&stack_a, &stack_b);
//	rr(&stack_a, &stack_b);
//	rrr(&stack_a, &stack_b);
//	sa(&stack_a);	
//	pa(&stack_a, &stack_b);
//	pa(&stack_a, &stack_b);
//	pa(&stack_a, &stack_b);
//
//	printf("Stack a ordered:\n");
//	print_stack(&stack_a);
//	printf("-------------------\n");
//	printf("Stack b:\n");
//	print_stack(&stack_b);
//	printf("-------------------\n");
//	printf("Stack b:\n");
//	print_stack(&stack_b);
//	printf("-------------------\n");
//	i = 1;
//	while (i < argc)
//	{
//		push(&stack_a, &stack_b);
//		printf("Stack a after push:\n");
//		print_stack(&stack_a);
//		printf("Stack b after push:\n");
//		print_stack(&stack_b);
//		printf("-------------------\n");
//		i++;
//	}
//	swap(&stack_a);
//	printf("Stack a after swap:\n");
//	print_stack(&stack_a);
//	printf("-------------------\n");
//	rotate(&stack_a);
//	printf("Stack a after rotate:\n");
//	print_stack(&stack_a);
//	printf("-------------------\n");
//	reverse(&stack_a);
//	printf("Stack a after reverse:\n");
//	print_stack(&stack_a);
//	printf("-------------------\n");
