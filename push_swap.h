/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:39 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/22 16:44:30 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

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
void	push_stack(t_stack *stack, int content);
t_node	*node_add(int content);

void indexer(t_stack *stack_one);

void	push(t_stack *stack_one, t_stack *stack_two);
void	rotate(t_stack *stack);

#endif
