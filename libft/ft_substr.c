/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:26:37 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:27 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		size -= 1;
		while (src[i] && (i < size))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s + start, (len + 1));
	return (res);
}

/*int	main(void)
{
	char		str[16] = "heslklksalk";

	printf("%s\n", ft_substr(str, 3, 6));
}*/
