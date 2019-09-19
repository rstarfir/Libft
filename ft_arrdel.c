/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:31:28 by rstarfir          #+#    #+#             */
/*   Updated: 2019/09/19 18:02:49 by rstarfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_arrdel(void **res)
{
	void	**tmp;

	tmp = res;
	while (res && *res)
		free(*res++);
	free(tmp);
	tmp = NULL;
	return (tmp);
}
