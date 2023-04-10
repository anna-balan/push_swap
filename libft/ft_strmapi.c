/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:51:05 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:08 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*newstr;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	newstr = malloc(length * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
