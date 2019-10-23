/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 01:26:44 by argonthi          #+#    #+#             */
/*   Updated: 2019/10/21 02:57:07 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char **as)
{
	int i;

	i = 0;
	if (!as)
		return ;
	while (as[i])
	{
		ft_strdel(&as[i]);
		i++;
	}
	ft_memdel((void*)&as);
}
