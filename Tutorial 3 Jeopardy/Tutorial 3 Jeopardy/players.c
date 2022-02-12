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

 // Finds and return matching player names involved in Jeopardy Game
bool player_exists(player* players, char* name)
{
    bool exist_name;
    int i;
    int num_players = sizeof(players);
    for(i = 0; i <= num_players; i++){
        if(players[i].name == name){
            exist_name = true; //Player is in Jeopardy game
            
        }

        else{
            exist_name = false; //Player not participated in Jeopardy
        }

    }

    return exist_name;
}

//Updates score when the player guesses the correct answer
void update_score(player* players, char* name, int score)
{

    int num_of_players;
    int j = 0;

    for (j = 0; j <= num_of_players; ++j)
    {
        if (players[j].name == name){
            players[j].score = score;
        }

    
    }

}