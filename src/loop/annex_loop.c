/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** annex
*/

#include "my.h"

void cond_gameplay(dwd_t *dwd, fight_t *f, map_t *map)
{
    if (fight(dwd, f, check_bg(f), check_enemy(f)) == 0) {
        reset_shield(f);
        reset_cooldown(f);
        after_instance(map, dwd);
        f->quest = f->quest + 1;
        dwd->is_open = GAME_MAP;
    }
    if (fight(dwd, f, check_bg(f), check_enemy(f)) == 2) {
        reset_shield(f);
        reset_cooldown(f);
        after_instance(map, dwd);
        map->origin.x = 5;
        map->origin.y = 1163;
        map->perso.p_perso.x = -360;
        map->perso.p_perso.y = 270;
	f->cait.spe[9] = f->cait.spe[10];
        dwd->is_open = GAME_MAP;
    }
}
