/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:31:42 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:21:55 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (src <= dest)
	{
		while (n)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}

// int main(void)
// {   
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;

// 	dest = src + 1;
//     puts(ft_memmove(dest, src, 8));
//     return (0);
// }
