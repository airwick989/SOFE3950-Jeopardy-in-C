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

    strcpy(questions[8].category, "Big Brain");
    strcpy(questions[8].question, "This is Ridwans name");
    strcpy(questions[8].answer, "Ridwan");
    questions[8].value = 100;
    questions[8].answered =  false;

    strcpy(questions[9].category, "Big Brain");
    strcpy(questions[9].question, "This is Ahmets name");
    strcpy(questions[9].answer, "Ahmet");
    questions[9].value = 200;
    questions[9].answered =  false;

    strcpy(questions[10].category, "Big Brain");
    strcpy(questions[10].question, "This is Michaels name");
    strcpy(questions[10].answer, "Michael");
    questions[10].value = 400;
    questions[10].answered =  false;

    strcpy(questions[11].category, "Big Brain");
    strcpy(questions[11].question, "This is my name");
    strcpy(questions[11].answer, "NONE OF YO BUISINUS");
    questions[11].value = 800;
    questions[11].answered =  false;

    strcpy(questions[12].category, "Monopoly");
    strcpy(questions[12].question, "This is the lowest value of monopoly currency (wrigthen value ex:therty-seven)");
    strcpy(questions[12].answer, "One");
    questions[12].value = 100;
    questions[12].answered =  false;

    strcpy(questions[13].category, "Monopoly");
    strcpy(questions[13].question, "This artical of clothing witch also adorns the head of the games mascot is a famous playable token");
    strcpy(questions[13].answer, "Tophat");
    questions[13].value = 200;
    questions[13].answered =  false;

    strcpy(questions[14].category, "Monopoly");
    strcpy(questions[14].question, "This is the monopoly mans prefered tittle");
    strcpy(questions[14].answer, "Mr");
    questions[14].value = 400;
    questions[14].answered =  false;

    strcpy(questions[15].category, "Monopoly");
    strcpy(questions[15].question, "There are this many tiles on a monopoly board");
    strcpy(questions[15].answer, "40");
    questions[15].value = 800;
    questions[15].answered =  false;

    strcpy(questions[16].category, "Space");
    strcpy(questions[16].question, "The sun is classified as this celstial object");
    strcpy(questions[16].answer, "Star");
    questions[16].value = 100;
    questions[16].answered =  false;

    strcpy(questions[17].category, "Space");
    strcpy(questions[17].question, "There are this many planets orbating the sun in our solar system (numeric value ex: 8)");
    strcpy(questions[17].answer, "8");
    questions[17].value = 200;
    questions[17].answered =  false;

    strcpy(questions[18].category, "Space");
    strcpy(questions[18].question, "The earth has a dimater of this size (in km) (numeric value ex: 12742)");
    strcpy(questions[18].answer, "12742");
    questions[18].value = 400;
    questions[18].answered =  false;

    strcpy(questions[19].category, "Space"); 
    strcpy(questions[19].question, "The sun is about this many times larger then the earth (numeric value ex:1300000)");
    strcpy(questions[19].answer, "1300000");
    questions[19].value = 800;
    questions[19].answered =  false;
}

// Displays each of the remaining categories and question which have not been answered
void display_categories(void)
{
    
        int lower = 1, upper = 5;// initilizes the bounds for the random number generator 
        int catRans[3] = {0, 0, 0};// initilizes the randomly selected questions catigories 

        for (int i = 0; i < 3; i++) {// must selct 3 categories 
            int catRan = 0; // starts equal to the catigories inorder to enter the loop
            while(catRan == catRans[0] && catRan == catRans[1] && catRan == catRans[2]){// no catigory can be the same so the randomly chosen one is comparied to the already chosen ones to ensure indivuality
                catRan = (rand()%(upper - lower + 1)) + lower; // gens the random number 
            }
            catRans[i] = catRan;// after aceptince the catagory number is saved 
        }


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
