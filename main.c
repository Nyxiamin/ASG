#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "struct.c"

int menu(){
    printf("\nWelcome in our Automatic Sentence Generator :\n\n"
           "Choose what you want to do :\n"
           "1) Modele n1 : noun - adjective - verb - noun\n"
           "2) Modele n2 : noun - 'qui' - verb - verb - noun - adjective \n"
           "3) Modele n2 : noun - verb - noun - adjective - 'et se' - verb \n"
           "4) Trouver une forme de base au hasard\n"
           "5) Exit\n\n"
           "Your Answer :");
    int value = -1;
    scanf(" %d",&value);
    while (value <1 || value >5){
        printf("You have entered a bad number please retry:");
        scanf(" %d",&value);
    }
    return value;
}

int branches(int *number_of_each_type_Verbs,int*number_of_each_type_Nouns,int*number_of_each_type_Adjectives,int number_of_each_type_Adverbs)
{
    int value = menu();
    switch (value){
        case 1:
            printf("You choose the first model\n");
            //Modele n1 : noun - adjective - verb - noun
            create_phrase1(number_of_each_type_Verbs,number_of_each_type_Nouns,number_of_each_type_Adjectives,number_of_each_type_Adverbs);
            break;
        case 2:
            printf("You choose the second model\n");
            //Modele n2 : noun - 'qui' - verb - verb - noun - adjective
            create_phrase2(number_of_each_type_Verbs,number_of_each_type_Nouns,number_of_each_type_Adjectives,number_of_each_type_Adverbs);
            break;
        case 3:
            printf("You choose the third model\n");
            //Modele n2 : noun - verb - noun - adjective - 'et' - verb
            create_phrase3(number_of_each_type_Verbs,number_of_each_type_Nouns,number_of_each_type_Adjectives,number_of_each_type_Adverbs);
            break;
        case 4:
            find_a_word(number_of_each_type_Verbs, number_of_each_type_Nouns, number_of_each_type_Adjectives, number_of_each_type_Adverbs);
            break;
        case 5:
            return 0;
    }
    Sleep(1000);
    printf("\nReturn to the menu...\n");
    Sleep(1000);
    branches(number_of_each_type_Verbs,number_of_each_type_Nouns,number_of_each_type_Adjectives,number_of_each_type_Adverbs);
}


int main(void){
    //opening files
    FILE *Verbs=NULL;
    Verbs = fopen("dictionnaire_verbs.txt", "w+");
    FILE *Nouns=NULL;
    Nouns = fopen("dictionnaire_nouns.txt", "w+");
    FILE *Adjectives=NULL;
    Adjectives = fopen("dictionnaire_adjectives.txt", "w+");
    FILE *Adverbs=NULL;
    Adverbs = fopen("dictionnaire_adverbs.txt", "w+");

    //sorting each files
    int * number_of_each_type_Verbs = Sort_types_Verbs(Verbs);
    int * number_of_each_type_Nouns = Sort_types_Nouns(Nouns);
    int * number_of_each_type_Adjectives = Sort_types_Adjectives(Adjectives);
    int number_of_each_type_Adverbs = Sort_types_Adverbs(Adverbs);
    //close files
    fclose(Verbs);
    fclose(Nouns);
    fclose(Adjectives);
    fclose(Adverbs);

    branches(number_of_each_type_Verbs,number_of_each_type_Nouns,number_of_each_type_Adjectives,number_of_each_type_Adverbs);
}

