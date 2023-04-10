/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:43:25 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/06 12:43:28 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// calcs and choose which rotation needed during push from a to b.
int	ft_find_rot_b(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = is_rrarrb_b(a, b, a->nbr);
	while (tmp)
	{
		if (i > is_rarb_b(a, b, tmp->nbr))
			i = is_rarb_b(a, b, tmp->nbr);
		if (i > is_rrarrb_b(a, b, tmp->nbr))
			i = is_rrarrb_b(a, b, tmp->nbr);
		if (i > is_rarrb_b(a, b, tmp->nbr))
			i = is_rarrb_b(a, b, tmp->nbr);
		if (i > is_rrarb_b(a, b, tmp->nbr))
			i = is_rrarb_b(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

// calcs how many rotates needed
int	is_rarb_b(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = ft_index_in_b(b, value);
	if (i < ft_index(a, value))
		i = ft_index(a, value);
	return (i);
}

int	is_rrarrb_b(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index_in_b(b, value))
		i = ft_lstsize(b) - ft_index_in_b(b, value);
	if ((i < (ft_lstsize(a) - ft_index(a, value))) && ft_index(a, value))
		i = ft_lstsize(a) - ft_index(a, value);
	return (i);
}

int	is_rrarb_b(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index(a, value))
		i = ft_lstsize(a) - ft_index(a, value);
	i = ft_index_in_b(b, value) + i;
	return (i);
}

int	is_rarrb_b(t_stack *a, t_stack *b, int value)
{
	int	i;

	i = 0;
	if (ft_index_in_b(b, value))
		i = ft_lstsize(b) - ft_index_in_b(b, value);
	i = ft_index(a, value) + i;
	return (i);
}
