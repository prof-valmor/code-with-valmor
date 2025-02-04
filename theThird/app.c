#include <stdio.h>
#include <stdbool.h>
/**
 * Data Structures - simple ones.
 * 
 * Imagine we need to handle data related to players on a game:
 * ID, current name, current coins (money), and status: online or not.
 * Let's create a structure to represent a player.
 * Let's create a library to handle players (add a new, remove one, update coins, change status...)
 * Let's create a library to store (RAM) all the players.
 * And let's use main to test our modules.
 * 
 * We can start the design bottom up (creating the modules, structures and then build up the app); or
 * we can start top down (creating the use cases for the modules and then use autocomplete to help writting the code.)
 * 
 * pay attention to the naming convensions i'll use for functions, variables, etc.
 */

#include "player-management/players.h" // maybe it would be good to find a better name for this module that will manage all the players...

void main(void) {
    //Use cases: 
    //1. add a new player. considering: ID[number], current name [string], current coins (money), and status [boolean]
    players_add_player(1, "valmor"); //function doesn't exist, we need to create.
    players_add_player(2, "second-valmor");
    // listing. expected valmor and second-valmor.
    players_print_list();

    players_remove_player(1);   //removing valmor

    players_print_list(); //expected to see second-valmor.

    players_add_player(3, "third-valmor");
    players_add_player(4, "fourth-valmor");
    players_print_list();   //expected to see second, third and fourth valmor ;)

    players_remove_player(2); // removing second-valmor, it's id is 2.
    players_print_list();   // expected to see third and fourth valmor.
    
}
