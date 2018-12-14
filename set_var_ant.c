/*
** EPITECH PROJECT, 2018
** set_var_ant.c
** File description:
** set_var_ant.c
*/

#include "include/my.h"

/*
** Copy only the name of the room in a tab
*/

char *str_comp(char *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src));

    for (int i; src[i] != ' '; i++)
        dest[i] = src[i];
    return (dest);
}

/*
** Knowing if the str is a room or not
*/

int is_param(char *param)
{
    int j = 0;

    if (param[0] == '#')
        return (1);
    for (j; param[j] != ' ' || param[j] != '\0'; j++);
    if (param[j] == ' ')
        return (0);
    return (1);
}

/*
** Count the number of rooms
*/

int how_many_rooms(char **tab)
{
    int y = 0;
    int j = 0;

    for (int i = 0; tab[i] != NULL; i++) {
        if (tab[i][0] != '#')
            for (j; tab[i][j] != ' ' || tab[i][j] != '\0'; j++);
        if (tab[i][j] == ' ')
            y++;
    }
    return (y);
}

/*
** Create a tab with all the rooms' names in it
*/

char **rooms_tab(char **tab)
{
    int y = how_many_rooms(tab);
    char **parameters = malloc(sizeof(char *) * y);
    char *tmp;

    for (int i = 0; tab[i] != NULL; i++)
        if (is_param(tab[i]) == 0){
            tmp = str_comp(tab[i]);
            parameters[i] = malloc(sizeof (char) * my_strlen(tmp));
            parameters[i] = my_strcpy(tmp, parameters[i]);
                }
    return (parameters);
}
