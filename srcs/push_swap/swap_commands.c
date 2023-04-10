/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:54:05 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/07 19:57:40 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !((*stack)->next))
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	ft_sa(t_stack **a, int j)
{
	swap(a);
	if (j == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b, int j)
{
	swap(b);
	if (j == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int j)
{
	swap(a);
	swap(b);
	if (j == 0)
		write(1, "ss\n", 3);
}
