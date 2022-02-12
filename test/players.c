/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2022, <Ridwan Hossain, Micheal Metry, Joshua White>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "players.h"

 // Returns true if the player name matches one of the existing players
bool player_exists(player* players, char* name)
{
    bool exist_name;
    int i;
    for(i = 0; i <= sizeof(players); i++){
        if(players[i].name == name){
            exist_name = true;
            
        }

        else{
            exist_name = false;
        }

    }

    return exist_name;
}

//Updates score when the player guesses the correct answer
void score_update(player* players, char* name, int score)
{

    int num_of_players;
    int j = 0;

    for (j = 0; j <= num_of_players; ++j)
    {
        if ()
    }

}