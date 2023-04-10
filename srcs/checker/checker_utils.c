/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:23:30 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/07 13:23:32 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_add_back_node(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

t_stack	*ft_new_stack(int number)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_error();
	new->nbr = number;
	new->next = NULL;
	return (new);
}

t_stack	*ft_handle_quoted_str(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi_long(tmp[i]);
		ft_add_back_node(&a, ft_new_stack(j));
		i++;
	}
	ft_free_str(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_handle_input(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = ft_handle_quoted_str(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi_long(argv[i]);
			ft_add_back_node(&a, ft_new_stack(j));
			i++;
		}
	}
	return (a);
}
