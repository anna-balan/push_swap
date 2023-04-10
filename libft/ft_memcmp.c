/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:29:25 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:21:44 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((*p1 == *p2) && i < (n - 1))
	{
		p1++;
		p2++;
		i++;
	}
	return (*p1 - *p2);
}

/*int	main(void)
{
	char	str[100] = "exasingisfun";
	char	str2[100] = "exas";

	printf("%d \n", ft_memcmp(str, str2, 6));
	printf("%d", memcmp(str, str2, 6));
	return (0);
}
*/