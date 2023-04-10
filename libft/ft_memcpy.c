/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:03:27 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:21:50 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcp;
	char	*destp;

	i = 0;
	srcp = (char *)src;
	destp = (char *)dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {   
//     char dest[17] = "&&&&&&&&&&&&";
//     char str[7] = "This";
//     char *strp = str;
//     char *destp = dest;
//     ft_memcpy(destp, strp, 0);
//     puts(destp);

//     char dest1[17] = "&&&&&&&&&&&&";
//     char str1[7] = "This";
//     char *strp1 = str1;
//     char *destp1 = dest1;
//     memcpy(destp1, strp1, 0);
//     puts(destp1);
//     return (0);
// }
