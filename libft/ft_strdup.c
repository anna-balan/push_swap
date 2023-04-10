/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:02:19 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:44 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(sizeof(*src) * (i + 1));
	if (dest == ((void *)0))
		return (((void *)0));
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*firststr;

	if (argc > 1)
	{
		firststr = argv[1];
		printf("Src one %s  %p \n", firststr, firststr);
		printf("New one %s  %p \n", ft_strdup(argv[1]), ft_strdup(argv[1]));
	}
	return (0);
}
*/