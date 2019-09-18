/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:31:01 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/10 23:02:13 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *c;

	c = (unsigned char *)dest;
	while (n == 0)
		return (dest);
	while (n-- > 0)
		*c++ = *(unsigned char *)src++;
	return (dest);
}
