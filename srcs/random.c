/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:53:41 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 17:56:43 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/race.h"

int	main(int argc, char **argv)
{
	int		circuit;
	int		coupe;
	int		i;
	int		nb_races;
	int		all[12][4];
	t_coupe	all_races[12];

	init_all(all_races);
	srand((unsigned)time(NULL));
	if (argc == 1)
		nb_races = 8;
	else
		nb_races = ft_atoi(argv[1]);
    if (nb_races > 48)
        nb_races = 48;
    i = 0;
    ft_bzero(all, 12, 4);
    all[0][0] = 1;
	while (++i <= nb_races)
	{
		while (all[coupe][circuit] == 1)
        {
			coupe = (rand() % 12);
			circuit = (rand() % 4) + 1;
		}
		all[coupe][circuit] = 1;
		ft_show_races(i, circuit, all_races, coupe);
	}
}
