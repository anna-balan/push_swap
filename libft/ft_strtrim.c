/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:06:51 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:22 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strrchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}

/*int	main(void)
{
	const char		s1[30] = "aunl8a";
	const char		set[30] = "klckun";
	puts(ft_strtrim(s1, set));
}*/
