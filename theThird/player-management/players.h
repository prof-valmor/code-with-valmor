#ifndef _PLAYERS_H
#define _PLAYERS_H
#include <stdbool.h>
/**
 * name : caller function needs to create the string and is responsible to deallocate (? we talk about deallocate later.)
 */
void players_add_player_full(int id, char name[], int coins, bool status);
void players_add_player(int id, char name[]);
bool players_remove_player(int id);
bool players_remove_player_by_name(char name[]); // not passing length because strings have a termination char (\0) at the end so we can find out the length.

void players_print_list();

#endif