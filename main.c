/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:28:19 by hbalan            #+#    #+#             */
/*   Updated: 2023/03/21 22:34:27 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack, int value)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->num_value = value;
	new_node->next = *stack;
	*stack = new_node;
}
int	pop(t_stack **stack)
{
    int value;
    t_stack *temp;
    
    if (*stack == NULL)
        return (0);
    value = (*stack)->num_value;
    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
    return (value);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;
	int	k;
	int		value;
	t_stack	*temp;

	a = NULL;
	b = NULL;
	k = 0;
	i = 1;
	if (argc != 1)
	{
	// Push values onto stack a
		while (argv[i] != NULL)
		{
			value = ft_atoi(argv[i]);
			// if (value != 0)
			// {
				push(&a, value);
			// }
		i++;
		}
		
		temp = a;
		while (temp != NULL)
		{
			printf("%d\n", temp->num_value);
			temp = temp->next;
		}
		write(1, "\n", 1);
		value = pop(&a);
		push(&b, value);

		while (b != NULL)
		{
			write(1, "b: ", 3);
			printf("%d\n", b->num_value);
			b = b->next;
			
		}
		write(1, "\n", 1);
	// Print out the contents of stack a
		// while (a != NULL)
		// {
		// 	write(1, "a: ", 3);
		// 	printf("%d\n", a->num_value);
		// 	a = a->next;
		// 	k++;
		// }
		temp = a;
		while (temp != NULL)
		{
			write(1, "a: ", 3);
			printf("%d\n", temp->num_value);
			temp = temp->next;
			k++;
		}
		
		// printf("%d\n", k);
		// printf("%d\n", a->num_value);
	}
	else
		write(1, "Usage: ./a.out <number1> <number2> ...\n", 38);
	return (0);
}
