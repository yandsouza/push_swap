/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:11:33 by ynascime          #+#    #+#             */
/*   Updated: 2026/07/01 14:30:18 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	verify_strategy(char *str, int *strategy)
{
	if (ft_strncmp(str, "--simple", 9) == 0)
	{
		*strategy = 0;
		return (1);
	}
	else if (ft_strncmp(str, "--medium", 9) == 0)
	{
		*strategy = 1;
		return (1);
	}
	else if (ft_strncmp(str, "--complex", 10) == 0)
	{
		*strategy = 2;
		return (1);
	}
	else if (ft_strncmp(str, "--adaptive", 11) == 0)
	{
		*strategy = 3;
		return (1);
	}
	return (0);
}

static int validate_arg(char *arg, t_stack *stack_a)
{
	int	i;

	i = 0;
	if (!arg)
		return (0);
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (ft_isdigit(arg[i]) == 0)
		return (1);
	push_stack(stack_a, ft_atoi(arg));
	return (0);
}

static int	verify_args(char *arg, t_stack *stack_a)
{
	int i;
	char **args;

	args = ft_split(arg, ' ');
	i = 0;
	while (args[i])
	{
		if (validate_arg(args[i], stack_a))
			return (1);
		i++;
	}
	return (0);
}

int	parser(int argc, char **argv, t_stack *stack_a, int *strategy)
{
	int i;
	int count;

	*strategy = 3;
	count = 0;
	i = 1;
	while (i < argc)
	{
		if (verify_strategy(argv[i], strategy))
			count++;
		else if (verify_args(argv[i], stack_a))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	if (count > 1 || verify_duplicate(stack_a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	indexer(stack_a);
	return (0);
}
