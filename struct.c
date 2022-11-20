#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

t_tree createEmptyTree(){
    t_tree new_tree;
    new_tree.root = NULL;
    return new_tree;
}

p_tree Create_tree_verbs(FILE * file){
    t_tree tree_Verbs = createEmptyTree();

    char ligne[50];
    while(fgets(ligne, 50, file) != NULL) {
        printf("\n%s", ligne);
        char declination[15], original[15], type[30];
        sscanf(ligne, "%s %s %s", declination, original, type);
        if (strstr(type, "Ver:")) {
            printf("Declination:   %s\n", declination);
            printf("Original:   %s\n", original);
            printf("Type:   %s\n", type);
        }
    }
}





int * Sort_types_Verbs(FILE* Verbs){

    // Function used to sort the dictionary into an only verbs dictionary sorted by conjugation, PL/SG and 1P/2P/3P

    char ligne[200];
    static int numbersoftypes_Verbs[19]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    FILE *file = NULL;

    //-- IIMP : Indicatif Imparfait
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - SG - P1
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - SG - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - SG - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - PL - P1\n
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - PL - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IImp - PL - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[5] +=1;
        }
    }

    //-- IPRES : Indicatif Présent

    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - SG - P1
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[6] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - SG - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[7] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - SG - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[8] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - PL - P1
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[9] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - PL - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[10] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //IPre - PL - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[11] +=1;
        }
    }

    //-- SPre : Subjonctif Présent

    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - SG - P1
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[12] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - SG - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[13] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - SG - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[14] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - PL - P1
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[15] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - PL - P2
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[16] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //SPre - PL - P3
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[17] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Inf
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"Inf")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[18] +=1;
        }
    }
    //returning the table of how many verbs there is in each type
    return numbersoftypes_Verbs;
}

int * Sort_types_Nouns(FILE* Nouns){

    // Function used to sort the dictionary into an only nouns dictionary sorted Mas/Fem and PL/SG

    char ligne[200];
    static int numbersoftypes_Nouns[6]={0,0,0,0,0,0};
    FILE *file = NULL;

    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Mas - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Mas - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Fem - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Fem - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //InvGen - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"InvGen") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //InvGen - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"InvGen") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[5] +=1;
        }
    }
    //returning the table of how many nouns there is in each type
    return numbersoftypes_Nouns;
}

int * Sort_types_Adjectives(FILE* Adjectives){

    // Function used to sort the dictionary into an only adjectives dictionary sorted Mas/Fem and PL/SG

    char ligne[200];
    static int numbersoftypes_Adjectives[6]={0,0,0,0,0,0};
    FILE *file = NULL;

    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Mas - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Mas") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Mas - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Mas") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Fem - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Fem") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //Fem - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Fem") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //InvGen - SG
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"InvGen") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    //InvGen - PL
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"InvGen") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[5] +=1;
        }
    }
    //returning the table of how many adjectives there is in each type
    return numbersoftypes_Adjectives;
}

int Sort_types_Adverbs(FILE* Adverbs) {
    // Function used to sort the dictionary into an only adverbs dictionary
    char ligne[200], ligne1[200];
    static int numbersoftypes_Adverbs = 0;
    FILE *file = NULL;

    file = fopen("dictionnaire_non_accentue.txt", "r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (strstr(ligne,"Adv")){
            fputs(ligne, Adverbs);
            numbersoftypes_Adverbs += 1;
        }
    }
    //returning the number of adverbs
    return numbersoftypes_Adverbs;
}

void find_a_word(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //function used to find a word randomly in a certain type in the dictionary

    printf("We will find a word...\n Which type of word do you want?\n 1: Verbs   2:Nouns   3:Adjectives   4:Adverbes\n");
    int type=0;
    scanf("%d", &type);

    switch (type) {
        case 1:
            //VERB
            printf("You choose a Verb!\n");
            int nV=0;
            for (int i = 0; i < 19; i++) {
                nV += numberVerb[i]; //number of verbs in total
            }
            char ligneV[200];
            srand(time(NULL));
            int randomV = (int) (((double) rand() * (double) (nV) / (double) RAND_MAX)); //random number between 0 and nV
            int xV=0;
            FILE* fileV=NULL;
            fileV=fopen("dictionnaire_verbs.txt","r+");
            while (fgets(ligneV, 100, fileV) != NULL) {
                if (xV==randomV){
                    char *declination = malloc(30), *original = malloc(30), *conj = malloc(100);
                    sscanf(ligneV, "%s %s %s", declination, original, conj);
                    printf("Your verb is: '%s'", original);
                    free(declination);
                    free(original);
                    free(conj);
                }
                xV+=1; //pointer that goes through the file
            }
            break;
        case 2:
            //NOUN
            printf("You choose a Noun\n");
            int nN=0;
            for (int i = 0; i < 6; i++) {
                nN += numberNoun[i]; //number of nouns in total
            }
            char ligneN[200];
            srand(time(NULL));
            int randomN = (int) (((double) rand() * (double) (nN) / (double) RAND_MAX)); //random number between O and nN
            int xN=0;
            FILE* fileN=NULL;
            fileN=fopen("dictionnaire_nouns.txt","r+");
            while (fgets(ligneN, 100, fileN) != NULL) {
                if (xN==randomN){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneN, "%s %s %s", declination, original, decli);
                    printf("Your noun is: '%s'", original);
                    free(declination);
                    free(original);
                    free(decli);
                }
                xN+=1; //pointer that goes through the file
            }
            break;
        case 3:
            //ADJECTIVE
            printf("You choose an Adjective\n");
            int nA=0;
            for (int i = 0; i < 6; i++) {
                nA += numberAdjective[i]; //number of adjectives in total
            }
            char ligneA[200];
            srand(time(NULL));
            int randomA = (int) (((double) rand() * (double) (nA) / (double) RAND_MAX)); //random number between 0 and nA
            int xA=0;
            FILE* fileA=NULL;
            fileA=fopen("dictionnaire_adjectives.txt","r+");
            while (fgets(ligneA, 100, fileA) != NULL) {
                if (xA==randomA){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneA, "%s %s %s", declination, original, decli);
                    printf("Your adjective is: '%s'", original);
                    free(declination);
                    free(original);
                    free(decli);
                }
                xA+=1; //pointer that goes through the file
            }
            break;
        case 4:
            //ADVERB
            printf("You choose an Adverb\n");
            //in this case the numberAdverb is already the total counter of all the adverbs
            char ligneAd[200];
            srand(time(NULL));
            int randomAd = (int) (((double) rand() * (double) (numberAdverb) / (double) RAND_MAX)); //random number between 0 and numberAdverb
            int xAd=0;
            FILE* fileAd=NULL;
            fileAd=fopen("dictionnaire_adverbs.txt","r+");
            while (fgets(ligneAd, 100, fileAd) != NULL) {
                if (xAd==randomAd){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneAd, "%s %s %s", declination, original, decli);
                    printf("Your adverbe is: '%s'", original);
                    free(declination);
                    free(original);
                    free(decli);
                }
                xAd+=1; //pointer that goes through the file
            }
            break;
        default:
            printf("This is not a valid value.\n");
            //goes back to the menu
            break;
    }
}

void explain_a_word(){
    //This function find all informations of a non-based form word.
    //asking for a word
    printf("Which word do you want to find?\n");
    char word[30];
    scanf("%s", word);

    //opening the whole dictionary
    FILE* file;
    file = fopen("dictionnaire_non_accentue.txt","r+");
    int found = 0;
    char ligne[200];

    //searching through every line
    while(fgets(ligne, 100, file) != NULL) {
        char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
        sscanf(ligne, "%s %s %s", declination, original, type);
        if (strcmp(declination, word)==0) { //goes in if the first word of the line is the same that the one entered by the user
            printf("\n%s:", declination);

            //VERBS
            if (strstr(type, "Ver")){
                printf(" verbe %s,", original);
                if (strstr(type, "IImp")){
                    printf(" imparfait de l'indicatif,");
                    if (strstr(type, "SG")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du singulier.");
                    }
                    else if (strstr(type, "PL")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du pluriel.");
                    }
                }
                else if (strstr(type, "IPre")){
                    printf(" present de l'indicatif,");
                    if (strstr(type, "SG")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du singulier.");
                    }
                    else if (strstr(type, "PL")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du pluriel.");
                    }
                }
                else if (strstr(type, "SPre")){
                    printf(" subjonctif present,");
                    if (strstr(type, "SG")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du singulier.");
                    }
                    else if (strstr(type, "PL")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        printf(" du pluriel.");
                    }
                }
                else{
                    printf(" conjugaison inconnue,");
                    if (strstr(type, "SG")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        else if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        else if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        else{
                            printf(" forme particuliere");
                        }
                        printf(" du singulier.");
                    }
                    else if (strstr(type, "PL")){
                        if (strstr(type, "P1")){
                            printf(" 1ere personne");
                        }
                        else if (strstr(type, "P2")){
                            printf(" 2eme personne");
                        }
                        else if (strstr(type, "P3")){
                            printf(" 3eme personne");
                        }
                        else{
                            printf(" forme particuliere");
                        }
                        printf(" du pluriel.");
                    }
                }
            }

            //NOUNS AND ADJECTIVES
            if (strstr(type, "Nom") || strstr(type, "Adj")){
                if (strstr(type, "Mas")){
                    printf(" masculin");
                    if (strstr(type, "SG")){
                        printf(" singulier");
                    }
                    if (strstr(type, "PL")){
                        printf(" pluriel");
                    }
                }
                if (strstr(type, "Fem")){
                    printf(" feminin");
                    if (strstr(type, "SG")){
                        printf(" singulier");
                    }
                    if (strstr(type, "PL")){
                        printf(" pluriel");
                    }
                }
                if (strstr(type, "Nom")){
                    printf(" du nom %s.", original);
                }
                if (strstr(type, "Adj")){
                    printf(" de l'adjectif %s.", original);
                }
            }

            //ADVERBS
            if (strstr(type, "Adv")){
                printf(" forme invariable (adverbe).");
            }
            found = 1; //the word has been found
            free(declination);
            free(original);
            free(type);
        }
    }
    if (found == 0){
        printf("This word is not in the dictionary.");
    }
}

int pick_noun(const int* number_nouns){
    //This function prints a random chosen noun with the correct determinant and returns its type
    //Returns signification 1: Mas+SG   2: Mas+PL  3: Fem+SG 4: Fem+PL 5: InvGen+SG 6: InvGen+PL
    int nN=0;
    for (int i = 0; i < 6; i++) {
        nN += number_nouns[i]; //number of nouns in total
    }
    char ligneN[200];
    int randomN = rand()%nN+1-0;
    int xN=0;
    FILE* fileN=NULL;
    fileN=fopen("dictionnaire_nouns.txt","r+");

    while (fgets(ligneN, 100, fileN) != NULL) {
        if (xN==randomN){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligneN, "%s %s %s", declination, original, type);
            if (strstr(type,"Mas")){
                if (strstr(type,"SG")){
                    if (declination[0]=='a' ||declination[0]=='o'||declination[0]=='i'||declination[0]=='e'||declination[0]=='u'||declination[0]=='y'){
                        //if the first letter is a vowel, then it's "l'"
                        printf(" l'%s", declination);
                    }
                    else{
                        printf(" le %s", declination);
                    }
                    return 1;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 2;
                }
            }
            if (strstr(type,"Fem")){
                if (strstr(type,"SG")){
                    if (declination[0]=='a' ||declination[0]=='o'||declination[0]=='i'||declination[0]=='e'||declination[0]=='u'||declination[0]=='y'){
                        //if the first letter is a vowel, then it's "l'"
                        printf(" l'%s", declination);
                    }
                    else{
                        printf(" la %s", declination);
                    }
                    return 3;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 4;
                }
            }
            if (strstr(type,"InvGen")){
                if (strstr(type,"SG")){
                    if (declination[0]=='a' ||declination[0]=='o'||declination[0]=='i'||declination[0]=='e'||declination[0]=='u'||declination[0]=='y'){
                        //if the first letter is a vowel, then it's "l'"
                        printf(" l'%s", declination);
                    }
                    else{
                        printf(" le %s", declination);
                    }
                    return 5;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 6;
                }
            }
            free(declination);
            free(original);
            free(type);
        }
        xN+=1; //pointer that goes through the file
    }
}

void pick_adjective(const int* number_adj, int decli){
    //this function prints an adjective of the correct type according to the int decli
    char ligne[200];
    int min=0;
    for (int i=0;i<decli-1;i++){
        min += number_adj[i]; //min is at the beginning of the right part
    }
    int max=min+number_adj[decli-1]; //max is at the end
    int random = (int)(rand() * (max+1 - min) / RAND_MAX +min ); //random is between min and max
    int x=0;
    FILE* file=NULL;
    file=fopen("dictionnaire_adjectives.txt","r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (x==random){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligne, "%s %s %s", declination, original, type);
            printf(" %s", declination);
            free(declination);
            free(original);
            free(type);
        }
        x+=1; //pointer that goes through the file
    }
}

void pick_verb(const int* number_verb, int decli){
    //this function prints a verb of the correct conjugation according to the int decli
    char ligne[200];
    int randomtemps = (int)(rand() * (2+1) / RAND_MAX ); //used to take a random time between IIMP IPRE and SPRE
    int conj=0;
    if (decli == 1 || decli==3 || decli==5){ //singular nouns
        conj=2+randomtemps*6; //if it's singular
    }
    if (decli == 2 || decli==4 || decli== 6){ //plural nouns
        conj=5+randomtemps*6; //if it's plural
    }
    if (decli == 0){ //special case: not a noun, but a 1st person singular
        conj=randomtemps*6;
    }
    if (decli == 7){ //special case: not a noun, but a 2st person plural
        conj=4+randomtemps*6;
    }

    int min=0;
    for (int i=0;i<conj;i++){
        min += number_verb[i];//min is at the beginning of the right part
    }
    int max=min+number_verb[conj]; //max at the end
    int random = (int)(rand() * (max+1 - min) / RAND_MAX +min ); //random number between min and max
    int x=0;
    FILE* file=NULL;
    file=fopen("dictionnaire_verbs.txt","r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (x==random){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligne, "%s %s %s", declination, original, type);
            printf(" %s", declination);
            free(declination);
            free(original);
            free(type);
        }
        x+=1; //pointer that goes through the file
    }
}

void pick_adverb(int number_adverb){
    //this function prints a totally random adverb
    char ligne[200];
    int min=0;
    int max=number_adverb; //total number of adverbs
    int random = (int)(rand() * (max+1 - min) / RAND_MAX +min ); //random number between min and max
    int x=0;
    FILE* file=NULL;
    file=fopen("dictionnaire_adverbs.txt","r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (x==random){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligne, "%s %s %s", declination, original, type);
            printf(" %s", declination);
            free(declination);
            free(original);
            free(type);
        }
        x+=1; //pointer that goes through the file
    }
}

void create_phrase1(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n1 : noun - adjective - verb - noun
    srand(time(NULL)); //initializing the function rand with the time
    printf("=>  ");

    int word_declination = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination);
    pick_verb(numberVerb,word_declination);

    //this is important to make the function rand, when called in the same function multiple times in a row, to not give the same number.
    Sleep(1);

    int not_used = pick_noun(numberNoun);

    printf(".");
}

void create_phrase2(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n2 : noun - 'qui' - verb - verb - noun - adjective
    srand(time(NULL)); //initializing the function rand with the time
    printf("=>  ");

    int word_declination = pick_noun(numberNoun);
    printf(" qui");
    pick_verb(numberVerb,word_declination);

    //this is important to make the function rand, when called in the same function multiple times in a row, to not give the same number.
    Sleep(1);

    pick_verb(numberVerb,word_declination);
    int word_declination2 = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination2);

    printf(".");
}

void create_phrase3(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n3 : noun - verb - noun - adjective - 'et se' - verb - adverb
    srand(time(NULL)); //initializing the function rand with the time
    printf("=>  ");

    int word_declination = pick_noun(numberNoun);
    pick_verb(numberVerb,word_declination);

    //this is important to make the function rand, when called in the same function multiple times in a row, to not give the same number.
    Sleep(1);

    int word_declination2 = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination2);
    printf(" et se");
    pick_verb(numberVerb,word_declination);
    pick_adverb(numberAdverb);

    printf(".");
}

void create_phrase4(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n4 : 'Je' - verb - noun - adjective
    srand(time(NULL)); //initializing the function rand with the time
    printf("=>  ");

    printf("Je");
    pick_verb(numberVerb,0);
    int word_declination = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination);

    printf(".");
}

void create_phrase5(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n5 : 'Vous vous' - verb - adverb - 'avec' - noun
    srand(time(NULL)); //initializing the function rand with the time
    printf("=>  ");

    printf("Vous vous");
    pick_verb(numberVerb,7);
    pick_adverb(numberAdverb);
    printf(" avec");
    int not_used = pick_noun(numberNoun);

    printf(".");
}