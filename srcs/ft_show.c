/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:53:26 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 17:58:55 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/race.h"

void	ft_show_races(int i, int circuit, t_coupe *ar, int coupe)
{
	printf("Pour la course N%d:\n", i);
	if (circuit == 1)
		printf("    %s : %s\n\n", ar[coupe].cup_name, ar[coupe].race1);
	else if (circuit == 2)
		printf("    %s : %s\n\n", ar[coupe].cup_name, ar[coupe].race2);
	else if (circuit == 3)
		printf("    %s : %s\n\n", ar[coupe].cup_name, ar[coupe].race3);
	else if (circuit == 4)
		printf("    %s : %s\n\n", ar[coupe].cup_name, ar[coupe].race4);
}
