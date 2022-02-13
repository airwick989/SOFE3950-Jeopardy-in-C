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

    strcpy_s(questions[0].category, sizeof("memes"), "memes");
    strcpy_s(questions[0].question, sizeof("This character made his debut in Emporer's New Groove") , "This character made his debut in Emporer's New Groove");
    strcpy_s(questions[0].answer, sizeof("kronk"), "kronk");
    questions[0].value = 100;
    questions[0].answered = false;

    strcpy_s(questions[1].category, sizeof("memes"), "memes");
    strcpy_s(questions[1].question, sizeof("It May not be much but it is 'blank' work"), "It May not be much but it is 'blank' work");
    strcpy_s(questions[1].answer, sizeof("honest"), "honest");
    questions[1].value = 200;
    questions[1].answered = false;

    strcpy_s(questions[2].category, sizeof("memes"), "memes");
    strcpy_s(questions[2].question, sizeof("This famous rapper has been imortalized in a classic no, yes template"), "This famous rapper has been imortalized in a classic no, yes template");
    strcpy_s(questions[2].answer, sizeof("drake"), "drake");
    questions[2].value = 400;
    questions[2].answered = false;

    strcpy_s(questions[3].category, sizeof("memes"), "memes");
    strcpy_s(questions[3].question, sizeof("This group of 4 spider man valains are consindered to be the 'blank'"), "This group of 4 spider man valains are consindered to be the 'blank'");
    strcpy_s(questions[3].answer, sizeof("boys"), "boys");
    questions[3].value = 800;
    questions[3].answered = false;

    strcpy_s(questions[4].category, sizeof("monke"), "monke");
    strcpy_s(questions[4].question, sizeof("This large orange monke's is commonly known as an"), "This large orange monke's is commonly known as an");
    strcpy_s(questions[4].answer, sizeof("orangotang"), "orangotang");
    questions[4].value = 100;
    questions[4].answered = false;

    strcpy_s(questions[5].category, sizeof("monke"), "monke");
    strcpy_s(questions[5].question, sizeof("In the movie planet of the apes the chracter Ceser is this spcieces of monke"), "In the movie planet of the apes the chracter Ceser is this spcieces of monke");
    strcpy_s(questions[5].answer, sizeof("chimpanze"), "chimpanze");
    questions[5].value = 200;
    questions[5].answered = false;

    strcpy_s(questions[6].category, sizeof("monke"), "monke");
    strcpy_s(questions[6].question, sizeof("In this meme template a chipanze is urging readers to return to 'blank'"), "In this meme template a chipanze is urging readers to return to 'blank'");
    strcpy_s(questions[6].answer, sizeof("monke"), "monke");
    questions[6].value = 400;
    questions[6].answered = false;

    strcpy_s(questions[7].category, sizeof("monke"), "monke");
    strcpy_s(questions[7].question, sizeof("The lemur is native to only this african island"), "The lemur is native to only this african island");
    strcpy_s(questions[7].answer, sizeof("madagascar"), "madagascar");
    questions[7].value = 800;
    questions[7].answered = false;

    strcpy_s(questions[8].category, sizeof("monopoly"), "monopoly");
    strcpy_s(questions[8].question, sizeof("This is the lowest value of monopoly currency (written value ex:therty-seven)"), "This is the lowest value of monopoly currency (written value ex:therty-seven)");
    strcpy_s(questions[8].answer, sizeof("one"), "one");
    questions[8].value = 100;
    questions[8].answered = false;

    strcpy_s(questions[9].category, sizeof("monopoly"), "monopoly");
    strcpy_s(questions[9].question, sizeof("This artical of clothing witch also adorns the head of the games mascot is a famous playable token"), "This artical of clothing witch also adorns the head of the games mascot is a famous playable token");
    strcpy_s(questions[9].answer, sizeof("tophat"), "tophat");
    questions[9].value = 200;
    questions[9].answered = false;

    strcpy_s(questions[10].category, sizeof("monopoly"), "monopoly");
    strcpy_s(questions[10].question, sizeof("This is the monopoly mans prefered tittle"), "This is the monopoly mans prefered tittle");
    strcpy_s(questions[10].answer, sizeof("mister"), "mister");
    questions[10].value = 400;
    questions[10].answered = false;

    strcpy_s(questions[11].category, sizeof("monopoly"), "monopoly");
    strcpy_s(questions[11].question, sizeof("There are this many tiles on a monopoly board (numerical value, eg: 24)"), "There are this many tiles on a monopoly board (numerical value, eg: 24)");
    strcpy_s(questions[11].answer, sizeof("40"), "40");
    questions[11].value = 800;
    questions[11].answered = false;

}

// Displays each of the remaining categories and question which have not been answered
void display_categories(void)
{
    char questVall[12][20];

    for (int i = 0; i < 12; i++) {
        if (questions[i].answered == false) {
            snprintf(questVall[i], 20, "%d", questions[i].value);
        }
        else {
            snprintf(questVall[i], 20, "%s", "---");
        }
    }

    printf("---------------------------geepardy---------------------------\n");
    printf("  %s    |  %s  |  \t%s  \n", categories[0], categories[1], categories[2]);
    printf("--------------------------------------------------------------\n");

    printf("      %s  |  \t%s  |  \t%s  \n", questVall[0], questVall[4], questVall[8]);
    printf("--------------------------------------------------------------\n");

    printf("      %s  |  \t%s  |  \t%s  \n", questVall[1], questVall[5], questVall[9]);
    printf("--------------------------------------------------------------\n");

    printf("      %s  |  \t%s  |  \t%s  \n", questVall[2], questVall[6], questVall[10]);
    printf("--------------------------------------------------------------\n");

    printf("      %s  |  \t%s  |  \t%s  \n", questVall[3], questVall[7], questVall[11]);
    printf("--------------------------------------------------------------\n");
}

// Displays the question for the category and dollar value
void display_question(char category[], int value)
{
    for (int i = 0; i < 12; i++) {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {
            printf("Question: %s, Value: %d\n", questions[i].question, questions[i].value);
        }
        
    }
}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char category[], int value, char answer[])
{
    bool check = false;

    for (int i = 0; i < 12; i++) {
        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {
            if (strcmp(questions[i].answer, answer) == 0) {

                check = true;

            }
            else {

                check = false;
            }
        }
    }

    return check;
}

// Returns true if the question has already been answered
bool already_answered(char category[], int value)
{
    {
        bool complete = false;

        for (int i = 0; i < 12; i++) {

            if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {

                if (questions[i].answered == true) {

                    complete = true;

                }
                else {

                    complete = false;

                }
            }
        }

        return complete;
    }
}

void question_answered(char category[], int value)
{
    for (int i = 0; i < 12; i++) {

        if (strcmp(questions[i].category, category) == 0 && questions[i].value == value) {

            questions[i].answered = true;

        }
    }
}
