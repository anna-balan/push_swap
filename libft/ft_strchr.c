/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:13:18 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:42 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{	
	if (c == '\0')
		return ((char *)(str + (ft_strlen(str))));
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (0);
}
// int main(void)
// {
//     char str[] = "Anna, you get it, you go girl!";
//     char c = '\0';
//     puts(ft_strchr(str, c));

//     char str1[] = "Anna, you get it, you go girl!";
//     char c1 = '\0';
//     puts(strchr(str1, c1));
// }
