/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:22:52 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/06 14:22:55 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_find_min(*stack_a) == (*stack_a)->nbr)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_find_max(*stack_a) == (*stack_a)->nbr)
	{
		ft_ra(stack_a, 0);
		if (!ft_is_sorted(*stack_a))
			ft_sa(stack_a, 0);
	}
	else
	{
		if (ft_index(*stack_a, ft_find_max(*stack_a)) == 1)
			ft_rra(stack_a, 0);
		else
			ft_sa(stack_a, 0);
	}
}

void	ft_sort_b_more_three(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_find_rot_b(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == is_rarb_b(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == is_rrarrb_b(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == is_rarrb_b(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == is_rrarb_b(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
		ft_sort_b_more_three(stack_a, &stack_b);
	if (!ft_is_sorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_find_rot_a(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == is_rarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rarb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == is_rarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == is_rrarrb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rrarrb(stack_a, stack_b, tmp->nbr, 'b');
			else if (i == is_rrarb_a(*stack_a, *stack_b, tmp->nbr))
				i = ft_do_rrarb(stack_a, stack_b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_index(*stack_a, ft_find_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->nbr != ft_find_min(*stack_a))
				ft_ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->nbr != ft_find_min(*stack_a))
				ft_rra(stack_a, 0);
		}			
	}	
}
