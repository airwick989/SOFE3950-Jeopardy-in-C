/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "questions.h"
#include "players.h"
#include "jeopardy.h"

 // Put macros or constants here using #define
#define BUFFER_LEN 256
#define NUM_PLAYERS 4

// Put global environment variables here

// Displays the game results for each player, their name and final score, ranked from first to last place
void show_results(player* players, int num_players);


int main(int argc, char* argv[])
{
    // An array of 4 players, may need to be a pointer if you want it set dynamically
    player players[NUM_PLAYERS];

    // Input buffer and and commands
    char buffer[BUFFER_LEN] = { 0 };

    // Display the game introduction and initialize the questions
    initialize_game();
    printf("Hello and welcome to Jeopardy in C\n");

    // Prompt for players names
    printf("Please enter your names below:\n");

    // initialize each of the players in the array
    for (int i = 0; i < NUM_PLAYERS; i++) {
        printf("Player %d: ", i + 1);
        if (scanf_s("%s", players[i].name, 256) == 1)
            printf("\n");
        update_score(players, NUM_PLAYERS, players[i].name, 0);
    }

     //Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {
        char category[256];
        int value = 0;
        char answer[256];
        int questions_answered = 0;

        while (questions_answered < NUM_QUESTIONS) {

            for (int i = 0; i < NUM_PLAYERS; i++) {

                // Call functions from the questions and players source files
                display_categories();
                printf("%s, please enter a category, then enter the value of the question\n", players[i].name);
                printf("Category (in all lowercase): ");
                scanf("%s", &category);
                    printf("\n");
                printf("Value: ");
                scanf("%d", &value);
                    printf("\n");

                while (already_answered(category, value)) {
                    printf("Sorry! This question has already been answered!");
                    printf("%s, please enter a category, then enter the value of the question\n", players[i].name);
                    printf("Category (match case): ");
                    scanf("%s", &category);
                        printf("\n");
                    printf("Value: ");
                    scanf("%d", &value);
                        printf("\n");
                }
               
                display_question(category, value);

                printf("Answer (in all lowercase): ");
                if (scanf_s("%s", answer, 256) == 1)
                    printf("\n");

                if (valid_answer(category, value, answer)) {
                    printf("That's right! You get %d points!\n", value);
                    question_answered(category, value);
                    questions_answered++;
                    update_score(players, NUM_PLAYERS, players[i].name, players[i].score + value);
                }
                else {
                    printf("Dang, unfortunately that's wrong!\n");
                }

                show_results(players, NUM_PLAYERS);

            }

        }

        break;

    }
    return EXIT_SUCCESS;
}

void show_results(player* players, int num_players) {
    for (int i = 0; i < num_players; i++) {
        printf("Player: %s, Score: %d\n", players[i].name, players[i].score);
    }
}