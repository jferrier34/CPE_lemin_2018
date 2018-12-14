/*
** EPITECH PROJECT, 2018
** set_var_ant2.c
** File description:
** set_var_ant2.c
*/

#include "include/my.h"

char ***transforme_moi_ça(char **ça, char **moi)
{
    int Salem = tab_malloc(ça);
    char ***transforme = malloc(sizeof(char **) * Salem);

    for (int i = 0; i < Salem; i++)
        transforme[i] = malloc(sizeof(char *) * 2);

}
