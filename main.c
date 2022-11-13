#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "struct.c"

int menu(){
    printf("\nWelcome in our Automatic Sentence Generator :\n\n"
           "Choose what you want to do :\n"
           "1) Modele n1 : nom - adjectif - verbe - nom\n"
           "2) Modele n2 : nom - 'qui' - verbe - verbe - nom - adjectif \n"
           "3) Trouver une forme de base au hasard\n\n"
           "Your Answer :");
    int value = -1;
    scanf("%d",&value);
    while (value <1 || value >3){
        printf("You have entered a bad number please retry:");
        scanf("%d",&value);
    }
    return value;
}

int main(void)
{
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
    int value = menu();
    switch (value){
        case 1:
            printf("Thanks to have chose the first model\n");
            //Mettre la Fonction1 ICI
            //nom - adjectif - verbe - nom
            break;
        case 2:
            printf("Thanks to have chose the second model\n");
            //METTRE LA FONCTION2 ICI
            //nom - 'qui' - verbe - verbe - nom - adjectif
            break;
        case 3:
            find_a_word(number_of_each_type_Verbs, number_of_each_type_Nouns, number_of_each_type_Adjectives, number_of_each_type_Adverbs);
            break;
    }
    return 0;
}
