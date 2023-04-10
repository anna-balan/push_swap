/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:19:55 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:54 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// void	ft_toupper(unsigned int i, char *sym)
// {		
// 	if ((sym[i] >= 'a' && sym[i] <= 'z'))
// 		sym[i] = sym[i] - 32;
// 	printf("%c\n", sym[i]);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char		s[16] = "TyVoLe!";
// 	ft_striteri (s, ft_toupper);
// 	puts(s);
// }
