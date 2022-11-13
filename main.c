#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "struct.c"

int main(void)
{
    //opening files
    FILE *Verbs=NULL;
    Verbs = fopen("dictionnaire_verbs.txt", "w+");
    FILE *Names=NULL;
    Names = fopen("dictionnaire_names.txt", "w+");
    FILE *Adjectives=NULL;
    Adjectives = fopen("dictionnaire_adjectives.txt", "w+");
    FILE *Adverbs=NULL;
    Adverbs = fopen("dictionnaire_adverbs.txt", "w+");

    //sorting each files
    int * number_of_each_type_Verbs = Sort_types_Verbs(Verbs);
    printf("Number of verbs: %d %d\n", number_of_each_type_Verbs[0], number_of_each_type_Verbs[3]);
    int * number_of_each_type_Names = Sort_types_Names(Names);
    printf("Number of names: %d %d\n", number_of_each_type_Names[0], number_of_each_type_Names[3]);
    int * number_of_each_type_Adjectives = Sort_types_Adjectives(Adjectives);
    printf("Number of adjectives: %d %d\n", number_of_each_type_Adjectives[0], number_of_each_type_Adjectives[3]);
    int number_of_each_type_Adverbs = Sort_types_Adverbs(Adverbs);
    printf("Number of adverbs: %d \n", number_of_each_type_Adverbs);

    //close files
    fclose(Verbs);
    fclose(Names);
    fclose(Adjectives);
    fclose(Adverbs);
    return 0;
}

