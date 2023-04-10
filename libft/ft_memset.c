/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:58:44 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:16 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*pnt;

	i = 0;
	pnt = (char *)str;
	while (n > i)
	{
		pnt[i] = c;
		i++;
	}
	return (pnt);
}

//Try with "0", whar should we do?

// int main(void)
// {   
//     char str[7] = "This";
//     char *pntr = str;
//     ft_memset(pntr, '^', 0);
//     puts(pntr);

//     char str1[7] = "This";
//     char *pntr1 = str1;
//     memset(pntr1, '^', 0);
//     puts(pntr1);
//     return (0);
// }
