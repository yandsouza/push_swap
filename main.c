/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:54:53 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/30 14:20:26 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc == 1)
		return (0);
	stack_init(&stack_a);
	stack_init(&stack_b);
	if (parser(argc, argv, &stack_a))
		return (1);
	//selection_sort(&stack_a, &stack_b);
	chunk_sort(&stack_a, &stack_b);
	return (0);
}
