/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:54:53 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/29 16:53:54 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
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
		push_stack(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	if (verify_duplicate(&stack_a))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	indexer(&stack_a);
	printf("The disorder is %.2f\n", compute_disorder(&stack_a));
	printf("Stack a:\n");
	print_stack(&stack_a);
	printf("-------------------\n");
	printf("Stack b:\n");
	print_stack(&stack_b);
	printf("-------------------\n");

//	sa(&stack_a);	
//	pb(&stack_a, &stack_b);
//	pb(&stack_a, &stack_b);
//	pb(&stack_a, &stack_b);
//	rr(&stack_a, &stack_b);
//	rrr(&stack_a, &stack_b);
//	sa(&stack_a);	
//	pa(&stack_b, &stack_a);
//	pa(&stack_b, &stack_a);
//	pa(&stack_b, &stack_a);
//
	selection_sort(&stack_a, &stack_b);
	printf("Stack a ordered:\n");
	print_stack(&stack_a);
	printf("-------------------\n");
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
	return (0);
}
