/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:47:07 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:58 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcpy((res + ft_strlen(s1)), s2, ft_strlen(s2) + 1);
	return (res);
}

// int	main(void)
// {
// 	char		s1[16] = "Ty";
// 	char		s2[30] = "-8756";
// 	puts(ft_strjoin(s1, s2));
// }
