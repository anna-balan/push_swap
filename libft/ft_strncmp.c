/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:49:14 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:10 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	buff;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{	
		buff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (buff != 0)
		{
			return (buff);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[100] = "xearningisfun";
// 	char str2[100] = "xast";
// 	printf("%d", ft_strncmp(str, str2, 2));
// 	return (0);
// }
