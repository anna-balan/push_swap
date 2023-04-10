/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:46:54 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:21:41 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char str[] = "hello.test";
	const char ch = '.';
	char *ret;
	
	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
