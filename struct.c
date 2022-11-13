#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_tree createEmptyTree(){
    t_tree new_tree;
    new_tree.root = NULL;
    return new_tree;
}

int * Sort_types_Verbs(FILE* Verbs){
    char ligne[200];
    static int numbersoftypes_Verbs[18]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
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
    return numbersoftypes_Verbs;
}

int * Sort_types_Names(FILE* Names){
    char ligne[200];
    static int numbersoftypes_Names[4]={0,0,0,0};
    FILE *file = NULL;
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - SG\n",Names);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"SG")){
            fputs(ligne,Names);
            numbersoftypes_Names[0] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Mas - PL\n",Names);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Mas") && strstr(ligne,"PL")){
            fputs(ligne,Names);
            numbersoftypes_Names[1] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - SG\n",Names);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"SG")){
            fputs(ligne,Names);
            numbersoftypes_Names[2] +=1;
        }
    }
    file = fopen("dictionnaire_non_accentue.txt", "r+");
    fputs("Fem - PL\n",Names);
    while(fgets(ligne, 100, file) != NULL){
        if (strstr(ligne,"Nom") && strstr(ligne,"Fem") && strstr(ligne,"PL")){
            fputs(ligne,Names);
            numbersoftypes_Names[3] +=1;
        }
    }
    return numbersoftypes_Names;
}

int * Sort_types_Adjectives(FILE* Adjectives){
    char ligne[200];
    static int numbersoftypes_Adjectives[4]={0,0,0,0};
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