/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   race.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:54:24 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 17:54:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RACE_H
# define RACE_H

# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <unistd.h>

typedef struct s_coupe {
	char	*cup_name;
	char	*race1;
	char	*race2;
	char	*race3;
	char	*race4;
}	t_coupe;

t_coupe	ft_init_cup(char *name, char *r1, char *r2, char *r3, char *r4);

void	init_all(t_coupe *all_races);

void	ft_show_races(int i, int circuit, t_coupe *ar, int coupe);

int		ft_atoi(const char *str);

void	ft_bzero(int pointer[12][4], size_t count1 ,size_t count2);

#endif
