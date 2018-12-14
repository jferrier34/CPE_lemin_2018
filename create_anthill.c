/*
** EPITECH PROJECT, 2018
** create_anthill.c
** File description:
** creat_anthill.c
*/

#include "include/my.h"

/*
** find the first link
*/

char *find_first(char *element)
{
    char *final = malloc(sizeof(char) * my_strlen(element));

    for (int i = 0; element[i] != '-')
        final[i] = element[i];
    return (final);
}

/*
** find the second link
*/

char *find_second(char *element)
{
    int i = 0;
    char *final = malloc(sizeof(char) * my_strlen(element));

    for (i; element[i] != '-'; i++);
    for (i; element[i] != '\0'; i++)
        final[i] = element[i];
    return (final);
}

/*
** create the rooms of the anthill
*/

room **create_room(char *param, room **anthill, int i, int nbr)
{
    room *new = malloc(sizeof(room));

    if (new != NULL) {
        new->name = param;
        new->ant = 0;
        new->next = malloc(sizeof(room *) * nbr);
        anthill[i] = new;
        i++;
    }
    return (anthill);
}

/*
** add a room to the anthill
*/

void add_room(room **anthill, char *links, int nbr_rooms)
{
    char *first = find_first(links);
    char *second = find_second(links);
    int f_link;
    int s_link;
    int y = 0;

    for (int i = 0; i <= nbr_rooms; i++) {
        if (my_strcmp(anthill[i]->name, first) == 0)
            f_link = i;
        if (my_strcmp(anthill[i]->name, second) == 0)
            s_link = i;
    }
    for (y; anthill[f_lin]k->next[y] != NULL; y++);
    anthill[f_link]->next[y] = anthill[s_link];
    y = 0;
    for (y; anthill[s_link]->next[y] != NULL; y++);
    anthill[s_link]->next[y] = anthill[f_link];
}

/*
** create the anthill with all the rooms
*/

room **create_anthill(char **parameters, int nbr_rooms, char **link)
{
    int i = 0;
    room **anthill = malloc(sizeof(room) * nbr_rooms);

    for (i; i <= nbr_rooms; i++)
        create_room(parameters[i], anthill, i, nbr_rooms);
    i = 0;
    for (i; i < tab_malloc(link); i++) {
        add_room(anthill, link[i], nbr_rooms);
    }
    return (anthill);
}
