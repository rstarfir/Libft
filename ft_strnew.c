/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:14:35 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/13 21:54:54 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	size_max;

	size_max = -1;
	if ((size_max == size) || !(str = malloc(size++)))
		return (NULL);
	ft_memset(str, 0, size++);
	return (str);
}
