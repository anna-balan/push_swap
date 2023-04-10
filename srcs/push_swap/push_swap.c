/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:04:42 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/07 20:44:10 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//add a new node to the stack from back side
void	ft_add_back_node(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

// add new stack node from passed number.
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

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		return (0);
	a = ft_handle_input(argc, argv);
	if (!a || ft_is_dup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_is_sorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	t_stack	*a;

	//declare temp store for our stack checks
	t_stack	*temp;

	//set a stack to Null - avoid segm fault issue
	a = NULL;

	//
	//show empty stack a
	temp = a;
		while (temp != NULL)
		{
			printf("%ld\n", temp->nbr);
			temp = temp->next;
		}
		write(1, "\n", 1);
	//

	a = ft_handle_input(argc, argv);
	if (!a || ft_is_dup(a))
	{
		ft_free(&a);
		ft_error();
	}

	//show unsorted stack a
	temp = a;
		while (temp != NULL)
		{
			printf("%ld\n", temp->nbr);
			temp = temp->next;
		}
		write(1, "\n", 1);
	//

	if (!ft_is_sorted(a))
		ft_sort(&a);

	//show sorted stack a
	temp = a;
		while (temp != NULL)
		{
			printf("%ld\n", temp->nbr);
			temp = temp->next;
		}
		write(1, "\n", 1);
	//
	ft_free(&a);
	return (0);
}
*/