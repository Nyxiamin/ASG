#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


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


int pick_noun(const int* number_nouns){
    //1: Mas+SG   2: Mas+PL  3: Fem+SG 4: Fem+PL 5: InvGen+SG 6: InvGen+PL
    int nN=0;
    for (int i = 0; i < 6; i++) {
        nN += number_nouns[i];
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
                    printf(" le %s", declination);
                    return 1;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 2;
                }
            }
            if (strstr(type,"Fem")){
                if (strstr(type,"SG")){
                    printf(" la %s", declination);
                    return 3;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 4;
                }
            }
            if (strstr(type,"InvGen")){
                if (strstr(type,"SG")){
                    printf(" le %s", declination);
                    return 5;
                }
                if (strstr(type,"PL")){
                    printf(" les %s", declination);
                    return 6;
                }
            }
        }
        xN+=1;
    }
}

void pick_adjective(const int* number_adj, int decli){
    char ligne[200];
    int min=0;
    for (int i=0;i<decli-1;i++){
        min += number_adj[i];
    }
    int max=min+number_adj[decli-1];
    int random = (int)(rand() * (max+1 - min) / RAND_MAX +min );
    int x=0;
    FILE* file=NULL;
    file=fopen("dictionnaire_adjectives.txt","r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (x==random){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligne, "%s %s %s", declination, original, type);
            printf(" %s", declination);
        }
        x+=1;
    }
}

void pick_verb(const int* number_verb, int decli){
    char ligne[200];
    int randomtemps = (int)(rand() * (2+1) / RAND_MAX );
    int min=0;
    int conj=0;
    if (decli == 1 || decli==3 || decli==5){
        conj=2+randomtemps*6;
    }
    else{
        conj=5+randomtemps*6;
    }
    for (int i=0;i<conj;i++){
        min += number_verb[i];
    }
    int max=min+number_verb[conj];
    int random = (int)(rand() * (max+1 - min) / RAND_MAX +min );
    int x=0;
    FILE* file=NULL;
    file=fopen("dictionnaire_verbs.txt","r+");
    while (fgets(ligne, 100, file) != NULL) {
        if (x==random){
            char *declination = malloc(30), *original = malloc(30), *type = malloc(100);
            sscanf(ligne, "%s %s %s", declination, original, type);
            printf(" %s", declination);
        }
        x+=1;
    }
}

void create_phrase1(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n1 : noun - adjective - verb - noun
    srand(time(NULL));
    printf("=>  ");
    int word_declination = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination);
    pick_verb(numberVerb,word_declination);
    Sleep(1);
    int not_used = pick_noun(numberNoun);
    printf(".");
}

void create_phrase2(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n2 : noun - 'qui' - verb - verb - noun - adjective
    srand(time(NULL));
    printf("=>  ");
    int word_declination = pick_noun(numberNoun);
    printf(" qui");
    pick_verb(numberVerb,word_declination);
    Sleep(1);
    pick_verb(numberVerb,word_declination);
    int word_declination2 = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination2);
    printf(".");
}

void create_phrase3(const int* numberVerb, const int* numberNoun, const int* numberAdjective, int numberAdverb){
    //Modele n2 : noun - verb - noun - adjective - 'et se' - verb
    srand(time(NULL));
    printf("=>  ");
    int word_declination = pick_noun(numberNoun);
    pick_verb(numberVerb,word_declination);
    Sleep(1);
    int word_declination2 = pick_noun(numberNoun);
    pick_adjective(numberAdjective,word_declination2);
    printf(" et se");
    pick_verb(numberVerb,word_declination);
    printf(".");
}