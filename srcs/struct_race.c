/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_race.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:53:56 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 17:53:58 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/race.h"

t_coupe	ft_init_cup(char *name, char *r1, char *r2, char *r3, char *r4)
{
	t_coupe	new_cup;

	new_cup.cup_name = name;
	new_cup.race1 = r1;
	new_cup.race2 = r2;
	new_cup.race3 = r3;
	new_cup.race4 = r4;
	return (new_cup);
}
