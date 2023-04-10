/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:56:33 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/07 19:56:50 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static void	rot(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = lstlast(*stack);
	(*stack)->next = temp;
	*stack = temp->next;
	temp->next = NULL;
}

void	ft_ra(t_stack **a, int j)
{
	rot(a);
	if (j == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b, int j)
{
	rot(b);
	if (j == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	rot(a);
	rot(b);
	if (j == 0)
		write(1, "rr\n", 3);
}
