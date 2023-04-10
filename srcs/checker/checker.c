/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:23:18 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/09 17:15:46 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rev_rot_check(t_stack **a, t_stack **b, char *line)
{
	if (line[2] == 'a')
		ft_rra(a, 1);
	else if (line[2] == 'b')
		ft_rrb(b, 1);
	else if (line[2] == 'r')
		ft_rrr(a, b, 1);
}

char	*ft_commands_check(t_stack **a, t_stack **b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		ft_sa(a, 1);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		ft_sb(b, 1);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		ft_pa(a, b, 1);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		ft_pb(a, b, 1);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ft_ra(a, 1);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		ft_rb(b, 1);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n')
		ft_rev_rot_check(a, b, line);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
		ft_rr(a, b, 1);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ft_ss(a, b, 1);
	else
		ft_checker_error();
	return (get_next_line(0));
}

void	ft_checker(t_stack **a, t_stack **b, char *line)
{
	char	*tmp;

	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_commands_check(a, b, line);
		free(tmp);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!ft_is_sorted(*a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(line);
}

void	ft_checker_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	if (argc < 2)
		return (0);
	b = NULL;
	a = ft_handle_input(argc, argv);
	if (!a || ft_is_dup(a))
	{
		ft_free (&a);
		ft_checker_error();
	}
	line = get_next_line(0);
	if (!line && !ft_is_sorted(a))
		write(1, "KO\n", 3);
	else if (!line && ft_is_sorted(a))
		write(1, "OK\n", 3);
	else
		ft_checker(&a, &b, line);
	ft_free(&b);
	ft_free(&a);
	return (0);
}
