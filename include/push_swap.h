/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccaval <luccaval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:39 by ynascime          #+#    #+#             */
/*   Updated: 2026/07/01 23:06:20 by luccaval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

void	stack_init(t_stack *stack);
t_node	*node_add(int content);

int		parser(int argc, char **argv, t_stack *stack_a, int *strategy);
int		push_stack(t_stack *stack, int content);

void	indexer(t_stack *stack_one);
int		verify_duplicate(t_stack *stack_one);
double	compute_disorder(t_stack *stack);

void	swap(t_stack *stack);
void	push(t_stack *stack_one, t_stack *stack_two);
void	rotate(t_stack *stack);
void	reverse(t_stack *stack);

void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

void    ranking_index(t_stack *stack_a);
void	selection_sort(t_stack *stack_a, t_stack *stack_b);
void    chunk_sort(t_stack *stack_a, t_stack *stack_b);
void    binario_radix(t_stack *stack_a, t_stack *stack_b);

#endif
