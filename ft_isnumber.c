/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 00:25:51 by argonthi          #+#    #+#             */
/*   Updated: 2019/10/21 06:02:40 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnumber(char *c)
{
	int i;

	i = 0;
	if (c[i] == '-')
		i++;
	if (c[i] <= '0' && c[i] >= '9')
		return (0);
	else
	{
		while (c[i++] >= '0' && c[i++] <= '9')
			i++;
		if (c[i++])
			return (0);
	}
	return (1);
}
