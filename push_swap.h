/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:23:39 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/17 16:43:30 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

typedef struct s_node
{
	int *content;
	int *index;
	struct s_node *next;
	struct s_node *prev;
} t_node;

typedef struct s_stack
{
	int *content;
	int *size;
	struct s_node *top;
	struct s_node *bottom;
} t_stack;

#endif
