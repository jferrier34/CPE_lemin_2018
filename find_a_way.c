/*
** EPITECH PROJECT, 2018
** find_a_way.c
** File description:
** find_a_way.c
*/

#inlcude "include.my.h"

char **find_a_way(room **anthill, char *start, char *end)
{
    int i = 0;

    for (int i; str_cmp(anthill[i]->name, start); i++);
    anthill[i]->time_check = 0;

}
