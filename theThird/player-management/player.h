/**
 * defining what's a player for us.
 */
#ifndef _PLAYER_H
#define _PLAYER_H
    #include <stdbool.h>
    //in C we can define structures to hold data together. the syntax is:

    typedef struct {
        int id;
        char *name;
        int coins;
        bool status;
    } PLAYER_T;

//now we can declate variables of the type PLAYER_T...
#endif