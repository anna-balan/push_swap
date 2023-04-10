/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:53:24 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:20:31 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n);

void	ft_bzero(void *dst, size_t n)
{
	size_t	i;
	char	*pnt;

	i = 0;
	pnt = (char *)dst;
	while (n > i)
	{
		pnt[i] = '\0';
		i++;
	}
}

//I dunno how to check it better

// int main(void)
// {
//     char str[7] = "This";
//     char *pntr = str;
//     ft_bzero(pntr, 8);
//     puts(pntr);
// }
