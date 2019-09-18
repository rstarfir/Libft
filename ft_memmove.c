/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:22:13 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/12 16:22:17 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	i = 0;
	if (str1 == str2)
		return (dst);
	if (str1 > str2)
	{
		i = len;
		while (i-- > 0)
			str1[i] = str2[i];
	}
	else
	{
		while (++i < len)
			str1[i] = str2[i];
	}
	return (dst);
}
