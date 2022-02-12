/*
 * Tutorial 3 Jeopardy Project for SOFE 3950U: Operating Systems
 *
 * Copyright (C) 2022, <Ridwan Hossain, Micheal Metry, Joshua White>
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"


 // Initializes the array of questions for the game
void initialize_game(void)
{

    strcpy(questions[0].category, "Meeme's");
    strcpy(questions[0].question, "In this move the character 'Kronk' makes his debute");
    strcpy(questions[0].answer, "Emporers new Groove");
    questions[0].value = 100;
    questions[0].answered =  false;

    strcpy(questions[1].category, "Meeme's");
    strcpy(questions[1].question, "It May not be much but it is 'blank' work");
    strcpy(questions[1].answer, "Honest");
    questions[1].value = 200;
    questions[1].answered =  false;

    strcpy(questions[2].category, "Meeme's");
    strcpy(questions[2].question, "This famous rapper has been imortalized in a classic no, yes template");
    strcpy(questions[2].answer, "Drake");
    questions[2].value = 400;
    questions[2].answered =  false;

    strcpy(questions[3].category, "Meeme's");
    strcpy(questions[3].question, "This group of 4 spider man valains are consindered to be the 'blank'");
    strcpy(questions[3].answer, "Boys");
    questions[3].value = 800;
    questions[3].answered =  false;

    strcpy(questions[4].category, "Moke");
    strcpy(questions[4].question, "This lage orange moke's is commonly known as an");
    strcpy(questions[4].answer, "Oranotang");
    questions[4].value = 100;
    questions[4].answered =  false;

    strcpy(questions[5].category, "Moke");
    strcpy(questions[5].question, "In the movie planet of the apes the chracter Ceser is this spcieces of moke");
    strcpy(questions[5].answer, "Chimpanze");
    questions[5].value = 200;
    questions[5].answered =  false;

    strcpy(questions[6].category, "Moke");
    strcpy(questions[6].question, "In this meme template a chipanze is urging readers to return to 'blank'");
    strcpy(questions[6].answer, "Monke");
    questions[6].value = 400;
    questions[6].answered =  false;

    strcpy(questions[7].category, "Moke");
    strcpy(questions[7].question, "This subspicies of monke is native to only this african island");
    strcpy(questions[7].answer, "Madagascar");
    questions[7].value = 800;
    questions[7].answered =  false;

    strcpy(questions[8].category, "Monopoly");
    strcpy(questions[8].question, "This is the lowest value of monopoly currency (wrigthen value ex:therty-seven)");
    strcpy(questions[8].answer, "One");
    questions[8].value = 100;
    questions[8].answered =  false;

    strcpy(questions[9].category, "Monopoly");
    strcpy(questions[9].question, "This artical of clothing witch also adorns the head of the games mascot is a famous playable token");
    strcpy(questions[9].answer, "Tophat");
    questions[9].value = 200;
    questions[9].answered =  false;

    strcpy(questions[10].category, "Monopoly");
    strcpy(questions[10].question, "This is the monopoly mans prefered tittle");
    strcpy(questions[10].answer, "Mr");
    questions[10].value = 400;
    questions[10].answered =  false;

    strcpy(questions[11].category, "Monopoly");
    strcpy(questions[11].question, "There are this many tiles on a monopoly board");
    strcpy(questions[11].answer, "40");
    questions[11].value = 800;
    questions[11].answered =  false;

}

// Displays each of the remaining categories and question which have not been answered
void display_categories(void)
{
    char questVall[12][20];

    for (int i = 0; i < 12; i++){
        if (questions[i].answered == false){
            snprintf(questVall[i], 20, "%d", questions[i].value);
        }
        else{
            strcpy(questVall, " ");
        }
    }

    printf("---------------------------geepardy---------------------------");
    printf("  %s  |  %s  |  %s  \n", categories[0], categories[1], categories[2]);
    printf("--------------------------------------------------------------");

    printf("  %s  |  %s  |  %s  \n", questVall[0], questVall[1], questVall[2]);
    printf("--------------------------------------------------------------");

    printf("  %s  |  %s  |  %s  \n", questVall[3], questVall[4], questVall[5]);
    printf("--------------------------------------------------------------");

    printf("  %s  |  %s  |  %s  \n", questVall[6], questVall[7], questVall[8]);
    printf("--------------------------------------------------------------");

    printf("  %s  |  %s  |  %s  \n", questVall[9], questVall[10], questVall[11]);
    printf("--------------------------------------------------------------");
}

// Displays the question for the category and dollar value
void display_question(char* category, int value)
{
    for (int i = 0; i < 12; i++){
        if((questions[i].category == category) && (questions[i].value == value)){
            printf("Question: %s\n", questions[i].question);
        }
    }
}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char* category, int value, char* answer)
{
    bool check;

    for (int i = 0; i < 12; i++) {
        if ((questions[i].category == category) && (questions[i].value == value)) {
            if (strcmp(questions[i].answer, answer) == 0) {

                check = true;
            
            } else {
                
                check = false;
            }
        }
    }

    return check;
}

// Returns true if the question has already been answered
bool already_answered(char* category, int value)
{
    {
    bool complete;

    for (int i = 0; i < 12; i++) {
        
        if ((questions[i].category == category) && (questions[i].value == value)) {
            
            if (questions[i].answered == true) {
                
                complete = true;

            } else {

                complete = false;

            }
        }
    }

    return complete;
    }
}

void question_answered(char *category, int value)
{
    for (int i = 0; i < 12; i++) {
        
        if ((questions[i].category == category) && (questions[i].value == value)) {
            
            questions[i].answered = true;

        }
    }
}
