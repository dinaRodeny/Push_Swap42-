/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:55:07 by user              #+#    #+#             */
/*   Updated: 2026/11/09 21:09:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
typedef struct s_stack_node
{
    int value;
    int index;
    struct s_stack_node * next;
    struct s_stack_node * prev;
}t_stack_node;

t_stack_node	*create_node(int value);

#endif