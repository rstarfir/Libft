/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:42:18 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/18 23:43:38 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	words;
	size_t	j;
	size_t	k;

	if (!s || !(str = (char**)malloc(sizeof(*str) *
			((words = ft_wcount(s, c)) + 1))))
		return (NULL);
	k = -1;
	while (++k < words)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (!(str[k] = ft_strnew(j)))
			return (ft_arrdel((void**)str));
		else if (!(j = 0))
			while (*s != c && *s)
				str[k][j++] = *s++;
	}
	str[k] = 0;
	return (str);
}
