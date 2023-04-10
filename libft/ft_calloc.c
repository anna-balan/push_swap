/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:55:23 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:20:38 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size);

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mem;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems * size / nitems != size)
		return (0);
	mem = (void *)malloc(size * nitems);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, (nitems * size));
	return (mem);
}

// int main(void)
// {
//     puts(calloc(3, 1));
//     return (0);
// }
