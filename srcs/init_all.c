/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:53:04 by hgoorick          #+#    #+#             */
/*   Updated: 2021/09/29 18:11:11 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/race.h"

void	init_all(t_coupe *all_races)
{
	all_races[0] = ft_init_cup("Coupe champignon", "Champidrome",
			"Parc aquatique", "Canyon gourmand", "Temple Ka-Bang");
	all_races[1] = ft_init_cup("Coupe fleur", "Circuit Mario",
			"Promenade Toad", "Manoir Englouti", "Chutes Maskache");
	all_races[2] = ft_init_cup("Coupe étoile", "Aéroport Azur",
			"Lagon Tourbillon", "Electrodrome", "Descente Givrée");
	all_races[3] = ft_init_cup("Coupe speciale", "Dans les nuages",
			"Desert toussec", "Chateau de bowser", "Route Arc-en-ciel");
	all_races[4] = ft_init_cup("Coupe carapace", "WII prairie MEUH MEUH",
			"GBA Circuit mario", "DS plage aquao", "N64 Autoroute Toad");
	all_races[5] = ft_init_cup("Coupe banane", "GCN Desert Sec-Sec",
			"SNES plaines beigne 3", "N64 Autodrome Royal", "3DS Jungle DK");
	all_races[6] = ft_init_cup("Coupe feuile", "DS stade Wario",
			"GCN Royaume Sorbet", "3DS Piste musicale", "N64 Vallee Yoshi");
	all_races[7] = ft_init_cup("Coupe eclaire", "DS Horloge TIC-TAC",
			"3DS Egout piranha", "WII Volcan Grondant",
			"N64 Route Arc-en-ciel");
	all_races[8] = ft_init_cup("Coupe Oeuf", "GCN Circuit Yoshi",
			"Arene D'excitebike", "Route du dragon", "Mute city");
	all_races[9] = ft_init_cup("Coupe triforce", "WII mine d'or de Wario",
			"SNES Route Arc-En-Ciel", "Station GLAGLA", "Plaine d'hyrule");
	all_races[10] = ft_init_cup("Coupe crossing", "GCN parc baby",
			"GBA pays fromage", "Passage feuillage", "Aniaml crossing");
	all_races[11] = ft_init_cup("Coupe clochette", "3DS Koopapolis",
			"GBA Route ruban", "Metro Turbo", "Big blue");
}
