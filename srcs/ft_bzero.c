/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:59:31 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 18:59:32 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/race.h"

void	ft_bzero(int pointer[12][4], size_t count1 ,size_t count2)
{
	size_t			i;
    size_t			j;

	i = -1;
	while (++i < count1)
    {
        j = -1;
        while (++j < count2)
		      pointer[i][j] = 0;
    }
}
