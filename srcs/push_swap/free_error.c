/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:22:07 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/06 14:22:10 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//do free on the stack.
void	ft_free(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = tmp;
	}
}

void	ft_free_str(char **lst)
{
	char	*s;

	if (!lst)
		return ;
	while (*lst)
	{
		s = *lst;
		lst++;
		free(s);
	}
	*lst = NULL;
}

void	ft_error(void)
{	
	write (2, "Error\n", 6);
	exit(1);
}
