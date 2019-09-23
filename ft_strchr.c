/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:32:27 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/23 23:34:37 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
	}
	if ((unsigned char)c == '\0')
		return (s1);
	return (NULL);
}
