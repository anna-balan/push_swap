/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:54:20 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:00 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	if (!dst && size == 0)
		return (0);
	if (dst == src)
		return (0);
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
//this solution has Abort error - I don't know why
/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (!dst && size == 0)
		return (0);
	if (dst == src)
		return (0);
	if (size <= dest_size)
		return (size + src_size);
	if (size != 0)
	{
		i = 0;
		while (src[i] && i < (size - dest_size - 1))
		{
			dst[i + dest_size] = src[i];
			i++;
		}
		dst[i + dest_size] = '\0';
	}
	return (dest_size + src_size);
}*/
