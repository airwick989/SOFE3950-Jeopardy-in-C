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

    strcpy(questions[8].category, "Big Brain");
    strcpy(questions[8].question, "This is Ridwans name");
    strcpy(questions[8].answer, "Ridwan");
    questions[8].value = 100;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Big Brain");
    strcpy(questions[8].question, "This is Ahmets name");
    strcpy(questions[8].answer, "Ahmet");
    questions[8].value = 200;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Big Brain");
    strcpy(questions[8].question, "This is Michaels name");
    strcpy(questions[8].answer, "Michael");
    questions[8].value = 400;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Big Brain");
    strcpy(questions[8].question, "This is my name");
    strcpy(questions[8].answer, "NONE OF YO BUISINUS");
    questions[8].value = 800;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Monopoly");
    strcpy(questions[8].question, "This is the lowest value of monopoly currency (wrigthen value ex:therty-seven)");
    strcpy(questions[8].answer, "One");
    questions[8].value = 100;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Monopoly");
    strcpy(questions[8].question, "This artical of clothing witch also adorns the head of the games mascot is a famous playable token");
    strcpy(questions[8].answer, "Tophat");
    questions[8].value = 200;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Monopoly");
    strcpy(questions[8].question, "This is the monopoly mans prefered tittle");
    strcpy(questions[8].answer, "Mr");
    questions[8].value = 400;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Monopoly");
    strcpy(questions[8].question, "There are this many tiles on a monopoly board");
    strcpy(questions[8].answer, "40");
    questions[8].value = 800;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Space");
    strcpy(questions[8].question, "The sun is classified as this celstial object");
    strcpy(questions[8].answer, "Star");
    questions[8].value = 100;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Space");
    strcpy(questions[8].question, "There are this many planets orbating the sun in our solar system (numeric value ex: 8)");
    strcpy(questions[8].answer, "8");
    questions[8].value = 200;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Space");
    strcpy(questions[8].question, "The earth has a dimater of this size (in km) (numeric value ex: 12742)");
    strcpy(questions[8].answer, "12742");
    questions[8].value = 400;
    questions[8].answered =  false;

    strcpy(questions[8].category, "Space");
    strcpy(questions[8].question, "The sun is about this many times larger then the earth (numeric value ex:1300000)");
    strcpy(questions[8].answer, "1300000");
    questions[8].value = 800;
    questions[8].answered =  false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
}

// Displays the question for the category and dollar value
void display_question(char* category, int value)
{

}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char* category, int value, char* answer)
{
    // Look into string comparison functions
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char* category, int value)
{
    // lookup the question and see if it's already been marked as answered
    return false;
}
