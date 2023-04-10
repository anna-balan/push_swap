/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:31:59 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:23:16 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str) + 1;
	while (len != 0)
	{
		len--;
		if (str[len] == (char)c)
			return ((char *)(str + len));
	}
	return (0);
}

// int main(void)
// {
//     char str[] = "Y@ou go girl, same but reverced!";
//     char c = '-';
//     puts(ft_strrchr(str, c));

//     char str1[] = "Y@ou go girl, same but reverced!";
//     char c1 = '-';
//     puts(strrchr(str1, c1));
// }
