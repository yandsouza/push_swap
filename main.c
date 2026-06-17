/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:54:53 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/17 17:51:34 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;

//	if (argc == 1)
//		return (0);
	if (argc == 2)
		printf("%d", argv[1][0]);
	stack_init(&stack_a);
	stack_init(&stack_b);
	return (0);
}
