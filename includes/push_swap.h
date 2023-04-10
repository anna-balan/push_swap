/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:57:40 by hbalan            #+#    #+#             */
/*   Updated: 2023/04/05 12:57:42 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}	t_stack;

//start the programm with handling user input from prompt
void		ft_add_back_node(t_stack **stack, t_stack *stack_new);
t_stack		*ft_new_stack(int number);
t_stack		*ft_handle_input(int argc, char **argv);
t_stack		*ft_handle_quoted_str(char **argv);

//checks of input data
int			ft_is_sorted(t_stack *stack_a);
int			ft_is_dup(t_stack *a);

//main sort functions
void		ft_sort_three(t_stack **stack_a);
void		ft_sort_b_more_three(t_stack **stack_a, t_stack **stack_b);
void		ft_sort(t_stack **stack_a);

//utils
int			ft_atoi_long(const char *str);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
int			ft_find_min(t_stack *a);
int			ft_find_max(t_stack *a);

void		ft_error(void);
void		ft_free(t_stack **lst);
void		ft_free_str(char **lst);

// commands for sort
void		ft_sa(t_stack **a, int j);
void		ft_sb(t_stack **b, int j);
void		ft_ss(t_stack **a, t_stack **b, int j);
void		ft_pa(t_stack **a, t_stack **b, int j);
void		ft_pb(t_stack **a, t_stack **b, int j);
void		ft_ra(t_stack **a, int j);
void		ft_rb(t_stack **b, int j);
void		ft_rr(t_stack **a, t_stack **b, int j);
void		ft_rra(t_stack **a, int j);
void		ft_rrb(t_stack **b, int j);
void		ft_rrr(t_stack **a, t_stack **b, int j);

//to find number position within stack
int			ft_index(t_stack *stack, int value);
int			ft_index_in_b(t_stack *b, int pushed);
int			ft_index_in_a(t_stack *a, int pushed);

//calc and find optimal rotation operations
int			ft_find_rot_a(t_stack *a, t_stack *b);
int			ft_find_rot_b(t_stack *a, t_stack *b);

//calc amount of needed rotation command
int			is_rarb_a(t_stack *a, t_stack *b, int value);
int			is_rrarrb_a(t_stack *a, t_stack *b, int value);
int			is_rarrb_a(t_stack *a, t_stack *b, int value);
int			is_rrarb_a(t_stack *a, t_stack *b, int value);
int			is_rarb_b(t_stack *a, t_stack *b, int value);
int			is_rrarrb_b(t_stack *a, t_stack *b, int value);
int			is_rrarb_b(t_stack *a, t_stack *b, int value);
int			is_rarrb_b(t_stack *a, t_stack *b, int value);

//apply rotation operations and do push to stacks
int			ft_do_rarb(t_stack **a, t_stack **b, int pushed, char s);
int			ft_do_rrarrb(t_stack **a, t_stack **b, int pushed, char s);
int			ft_do_rrarb(t_stack **a, t_stack **b, int pushed, char s);
int			ft_do_rarrb(t_stack **a, t_stack **b, int pushed, char s);

//checker functions
void		ft_rev_rot_check(t_stack **a, t_stack **b, char *line);
char		*ft_commands_check(t_stack **a, t_stack **b, char *line);
void		ft_checker(t_stack **a, t_stack **b, char *line);
void		ft_checker_error(void);

#endif
