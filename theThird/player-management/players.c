
#include <stdbool.h>
#include "player.h"
#include "players.h"
#include <stdio.h>

//let's consider we are able to store on this module up to 100 players... we'll see how do do more on a later video...
#define MAX_PLAYERS 100

PLAYER_T players[MAX_PLAYERS]; // array of players.
// we'll start adding players on a sequence. this variable will point to the next empty position on the array.
int index_to_add_player = 0;   
//Private functions:
static void remove_and_move_from_index(int index);
static void move_down_from(int start_position);
//---------------------
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
/** removing player by id :) */
bool players_remove_player(int id_to_remove) {
    //neeed to search... using a loop ... :( 
    //index_to_add_player points to the end of the portion of the array we're using... worst case is 100.... (0 to 99)
    for(int index = 0; index < index_to_add_player; index++) {
        if(players[index].id == id_to_remove) {
            // here we know the position of the player on the array.. then it's just a matter to remove.
            remove_and_move_from_index(index); // private function :D
            return true;
        }
    }  
    return false; //means not found..
}

bool players_remove_player_by_name(char name[]) {

}
/** this is just for debugging initially... we can add more details if needed.*/
void players_print_list() {
    printf("\n------------------------------------------\n");
    // we can't print till the last valid position... 
    for(int i = 0; i < index_to_add_player; i++) {
        if(players[i].name != NULL)
            printf("\n name: %s ", players[i].name);
    }
    printf("\n------------------------------------------\n");
}

//Private functions:
/** considering we're removing from first position, last position, or any other. */
static void remove_and_move_from_index(int index) {
    if(index == (index_to_add_player - 1)) {
        //removing from last position occupied with valid data.
        index_to_add_player--; // just decrementing is enough.
    }
    else {
        //removing from other positions, including the first..
        //need to move down from any other starting point... 
        move_down_from(index);
    }
}

static void move_down_from(int start_position) {
    //pointers to make it simple to read...
    PLAYER_T *current_p;
    PLAYER_T *next_p;
    // another loop :(
    for(int i = start_position; i < (index_to_add_player-1); i++) {
        current_p = &players[i];
        next_p = &players[i + 1]; // we're taking one position ahead... so the loop needs to end on (index_to_add_player - 1) to be correct.
        // copying.
        current_p->id     = next_p->id;
        current_p->name   = next_p->name;
        current_p->coins  = next_p->coins;
        current_p->status = next_p->status;
    }
    //
    index_to_add_player--; // to indicate we removed one and keep the logic okay.
}