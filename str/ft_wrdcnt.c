/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 20:49:05 by rstarfir          #+#    #+#             */
/*   Updated: 2020/07/11 20:49:32 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdcnt(char *str, char sep)
{
	int		cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != sep)
		{
			cnt++;
			while (*str != sep && *str)
				str++;
		}
		else
			str++;
	}
	return (cnt);
}
