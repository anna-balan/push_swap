/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push_stacks.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:15:50 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/06 14:15:55 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_do_rarb(t_stack **a, t_stack **b, int pushed, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != pushed && ft_index_in_b(*b, pushed) > 0)
			ft_rr(a, b, 0);
		while ((*a)->nbr != pushed)
			ft_ra(a, 0);
		while (ft_index_in_b(*b, pushed) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != pushed && ft_index_in_a(*a, pushed) > 0)
			ft_rr(a, b, 0);
		while ((*b)->nbr != pushed)
			ft_rb(b, 0);
		while (ft_index_in_a(*a, pushed) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_do_rrarrb(t_stack **a, t_stack **b, int pushed, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != pushed && ft_index_in_b(*b, pushed) > 0)
			ft_rrr(a, b, 0);
		while ((*a)->nbr != pushed)
			ft_rra(a, 0);
		while (ft_index_in_b(*b, pushed) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != pushed && ft_index_in_a(*a, pushed) > 0)
			ft_rrr(a, b, 0);
		while ((*b)->nbr != pushed)
			ft_rrb(b, 0);
		while (ft_index_in_a(*a, pushed) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_do_rrarb(t_stack **a, t_stack **b, int pushed, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != pushed)
			ft_rra(a, 0);
		while (ft_index_in_b(*b, pushed) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_index_in_a(*a, pushed) > 0)
			ft_rra(a, 0);
		while ((*b)->nbr != pushed)
			ft_rb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_do_rarrb(t_stack **a, t_stack **b, int pushed, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != pushed)
			ft_ra(a, 0);
		while (ft_index_in_b(*b, pushed) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_index_in_a(*a, pushed) > 0)
			ft_ra(a, 0);
		while ((*b)->nbr != pushed)
			ft_rrb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}
