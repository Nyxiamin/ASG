#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


int * Sort_types_Verbs(FILE* Verbs){
    char ligne[200];
    static int numbersoftypes_Verbs[19]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    //-- IIMP
    FILE *file = NULL;
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - SG - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - SG - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - SG - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - PL - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - PL - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - PL - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IImp") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[5] +=1;
        }
    }
    //-- IPRES
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IPre - SG - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[6] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IPre - SG - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[7] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IPre - SG - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[8] +=1;
        }
    }
    fputs("IPre - PL - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[9] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IPre - PL - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[10] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IPre - PL - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"IPre") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[11] +=1;
        }
    }
    //-- SPre
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - SG - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[12] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - SG - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[13] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - SG - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"SG") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[14] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - PL - P1\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P1")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[15] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - PL - P2\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P2")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[16] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("SPre - PL - P3\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"SPre") && strstr(ligne,"PL") && strstr(ligne,"P3")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[17] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Inf\n",Verbs);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Ver") && strstr(ligne,"Inf")){
            fputs(ligne,Verbs);
            numbersoftypes_Verbs[18] +=1;
        }
    }
    return numbersoftypes_Verbs;
}

int * Sort_types_Nouns(FILE* Nouns){
    char ligne[200];
    static int numbersoftypes_Nouns[6]={0,0,0,0,0,0};
    FILE *file = NULL;
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - SG\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - PL\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - SG\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - PL\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("InvGen - SG\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"InvGen") && strstr(ligne,"SG")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("InvGen - PL\n",Nouns);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"InvGen") && strstr(ligne,"PL")){
            fputs(ligne,Nouns);
            numbersoftypes_Nouns[5] +=1;
        }
    }
    return numbersoftypes_Nouns;
}

int * Sort_types_Adjectives(FILE* Adjectives){
    char ligne[200];
    static int numbersoftypes_Adjectives[6]={0,0,0,0,0,0};
    FILE *file = NULL;
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - SG\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Mas") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - PL\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Mas") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - SG\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Fem") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - PL\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"Fem") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[3] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("InvGen - SG\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"InvGen") && strstr(ligne,"SG")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[4] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("InvGen - PL\n",Adjectives);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Adj") && strstr(ligne,"InvGen") && strstr(ligne,"PL")){
            fputs(ligne,Adjectives);
            numbersoftypes_Adjectives[5] +=1;
        }
    }
    return numbersoftypes_Adjectives;
}

int Sort_types_Adverbs(FILE* Adverbs) {
    char ligne[200], ligne1[200];
    static int numbersoftypes_Adverbs = 0;
    FILE *file = NULL;
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("IImp - SG - P1\n", Adverbs);
    while (fgets(ligne, 100, file) != NULL) {
        if (strstr(ligne,"Adv")){
            fputs(ligne, Adverbs);
            numbersoftypes_Adverbs += 1;
        }
    }
    return numbersoftypes_Adverbs;
}


/*
char* Extract_word(FILE * file){
    char ligne[200];
    char c[1]="a";
    while(fgets(ligne, 100, file) != NULL)
    {
        char *declination= malloc(30), *original = malloc(30), *type=malloc(100);
        sscanf(ligne,"%s %s %s", declination, original, type);
        while (original[0] != c[0]){
            c[0] += 1;
        }
        printf("\n%s", ligne);
        char type1[15], type2[15], type3[15], type4[15], type5[15];
        memcpy(type1, &type[4], 11 );
        type1[11] = '\0';
        memcpy(type2, &type[15], 11 );
        type2[11] = '\0';
        memcpy(type3, &type[26], 11 );
        type3[11] = '\0';
        memcpy(type4, &type[37], 11 );
        type4[11] = '\0';
        memcpy(type5, &type[48], 11 );
        type5[11] = '\0';
        printf("Declination:   %s\n", declination);
        printf("Original:   %s\n", original);
        printf("Type:   %s\n", type);
        printf("%s %s %s %s %s\n", type1, type2, type3, type4, type5);
        if (c[0] == 'a'){
            if (strstr(type1, "IImp")){
                //pointeur left
                if (strstr(type1,"SG")){
                    //pointeur left - left
                }
                if (strstr(type1,"PL")){
                    //pointeur left - right
                }
            }
            if (strstr(type1, "IPres")){
                //pointeur middle
                if (strstr(type1,"SG")){
                    //pointeur middle - left
                }
                if (strstr(type1,"PL")){
                    //pointeur middle - right
                }
            }
            if (strstr(type1, "SPre")){
                //pointeur right
                if (strstr(type1,"SG")){
                    //pointeur right - left
                }
                if (strstr(type1,"PL")){
                    //pointeur right - right
                }
            }
        }
    }
}
*/

void find_a_word(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    printf("We will find a word...\n Which type of word do you want?\n 1: Verbs   2:Nouns   3:Adjectives   4:Adverbes\n");
    int type=0;
    scanf("%d", &type);
    switch (type) {
        case 1:
            printf("You choose a Verb!\n");
            int nV=0;
            for (int i = 0; i < 19; i++) {
                nV += numberVerb[i];
            }
            char ligneV[200];
            srand(time(NULL));
            int randomV = (int) (((double) rand() * (double) (nV) / (double) RAND_MAX));
            int xV=0;
            FILE* fileV=NULL;
            fileV=fopen("dictionnaire_verbs.txt","r+");
            while (fgets(ligneV, 100, fileV) != NULL) {
                if (xV==randomV){
                    char *declination = malloc(30), *original = malloc(30), *conj = malloc(100);
                    sscanf(ligneV, "%s %s %s", declination, original, conj);
                    printf("Your verb is: '%s'", original);
                }
                xV+=1;
            }
            break;
        case 2:
            printf("You choose a Noun");
            int nN=0;
            for (int i = 0; i < 6; i++) {
                nN += numberNoun[i];
            }
            char ligneN[200];
            srand(time(NULL));
            int randomN = (int) (((double) rand() * (double) (nN) / (double) RAND_MAX));
            int xN=0;
            FILE* fileN=NULL;
            fileN=fopen("dictionnaire_nouns.txt","r+");
            while (fgets(ligneN, 100, fileN) != NULL) {
                if (xN==randomN){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneN, "%s %s %s", declination, original, decli);
                    printf("Your noun is: '%s'", original);
                }
                xN+=1;
            }
            break;
        case 3:
            printf("You choose an Adjective\n");
            int nA=0;
            for (int i = 0; i < 6; i++) {
                nA += numberAdjective[i];
            }
            char ligneA[200];
            srand(time(NULL));
            int randomA = (int) (((double) rand() * (double) (nA) / (double) RAND_MAX));
            int xA=0;
            FILE* fileA=NULL;
            fileA=fopen("dictionnaire_adjectives.txt","r+");
            while (fgets(ligneA, 100, fileA) != NULL) {
                if (xA==randomA){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneA, "%s %s %s", declination, original, decli);
                    printf("Your adjective is: '%s'", original);
                }
                xA+=1;
            }
            break;
        case 4:
            printf("You choose an Adverb\n");
            char ligneAd[200];
            srand(time(NULL));
            int randomAd = (int) (((double) rand() * (double) (numberAdverb) / (double) RAND_MAX));
            int xAd=0;
            FILE* fileAd=NULL;
            fileAd=fopen("dictionnaire_adverbs.txt","r+");
            while (fgets(ligneAd, 100, fileAd) != NULL) {
                if (xAd==randomAd){
                    char *declination = malloc(30), *original = malloc(30), *decli = malloc(100);
                    sscanf(ligneAd, "%s %s %s", declination, original, decli);
                    printf("Your adverbe is: '%s'", original);
                }
                xAd+=1;
            }
            break;
    }
}
