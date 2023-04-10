/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:40:57 by hbalan            #+#    #+#             */
/*   Updated: 2023/02/27 15:22:36 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;
	int	prev_is_del;

	i = 0;
	word = 0;
	prev_is_del = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			prev_is_del = 1;
		}
		else if (prev_is_del)
		{
			word++;
			if (s[i] != c)
				prev_is_del = 0;
		}
		i++;
	}
	return (word);
}

static int	ft_wordlen(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static char	ft_free(char **strs, int j)
{
	while (j > 0)
	{
		j--;
		free(strs[j]);
	}
	free(strs);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = 0;
	words = ft_count_word(s, c);
	strs = (char **)malloc((words + 1) * sizeof(char *));
	if (!(strs))
		return (NULL);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		size = ft_wordlen(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!(strs[j]))
			ft_free(strs, j);
		i = i + size;
		j++;
	}
	strs[j] = 0;
	return (strs);
}

/*int main(void)
{
	char		str[56] = "hel*lo-my-fri**end";
	char	**arr_str;
	arr_str = ft_split(str, '*');
	while (*arr_str)	
	{
		printf("%s\n", *arr_str);			
		arr_str++;						
	}
	return (0);
}*/