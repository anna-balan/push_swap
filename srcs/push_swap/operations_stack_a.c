/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:43:15 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/06 12:43:18 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// calcs and choose which rotation needed during push from b to a.
int	ft_find_rot_a(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = is_rrarrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > is_rarb_a(a, b, tmp->nbr))
			i = is_rarb_a(a, b, tmp->nbr);
		if (i > is_rrarrb_a(a, b, tmp->nbr))
			i = is_rrarrb_a(a, b, tmp->nbr);
		if (i > is_rarrb_a(a, b, tmp->nbr))
			i = is_rarrb_a(a, b, tmp->nbr);
		if (i > is_rrarb_a(a, b, tmp->nbr))
			i = is_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

// calcs how many rotates needed
int	is_rarb_a(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = ft_index_in_a(a, value);
	if (i < ft_index(b, value))
		i = ft_index(b, value);
	return (i);
}

int	is_rrarrb_a(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index_in_a(a, value))
		i = ft_lstsize(a) - ft_index_in_a(a, value);
	if ((i < (ft_lstsize(b) - ft_index(b, value))) && ft_index(b, value))
		i = ft_lstsize(b) - ft_index(b, value);
	return (i);
}

int	is_rarrb_a(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index(b, value))
		i = ft_lstsize(b) - ft_index(b, value);
	i = ft_index_in_a(a, value) + i;
	return (i);
}

int	is_rrarb_a(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index_in_a(a, value))
		i = ft_lstsize(a) - ft_index_in_a(a, value);
	i = ft_index(b, value) + i;
	return (i);
}
