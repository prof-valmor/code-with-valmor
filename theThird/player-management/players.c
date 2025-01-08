
#include <stdbool.h>
#include "player.h"
#include "players.h"
#include <stdio.h>

//let's consider we are able to store on this module up to 100 players... we'll see how do do more on a later video...
#define MAX_PLAYERS 100

PLAYER_T players[MAX_PLAYERS]; // array of players.
// we'll start adding players on a sequence. this variable will point to the next empty position on the array.
int index_to_add_player = 0;   

/**
 * the logic to add a player goes here.
 */
void players_add_player_full(int id, char name[], int coins, bool status) {
    // first point to the position of the array we'll fill up and then we copy the arguments.
    PLAYER_T *player = &players[index_to_add_player]; // pointer player will hold the address of the position we'll fill up.
    index_to_add_player++; // update index to point to the next position on the array... we need a better logic here.
    player->id = id;
    player->name = name;
    player->coins = coins;
    player->status = status;
}
/** adding a player just by using the id and name. */
void players_add_player(int id, char name[]) {
    players_add_player_full(id, name, 0, false);
}

void players_remove_player(int id) {

}
void players_remove_player_by_name(char name[]) {

}
/** this is just for debugging initially... we can add more details if needed.*/
void players_print_list() {
    printf("\n------------------------------------------\n");
    for(int i = 0; i < MAX_PLAYERS; i++) {
        if(players[i].name != NULL)
            printf("\n name: %s ", players[i].name);
    }
    printf("\n------------------------------------------\n");
}