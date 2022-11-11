#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_tree createEmptyTree(){
    t_tree new_tree;
    new_tree.root = NULL;
    return new_tree;
}

p_tree Create_tree_verbs(FILE * file){
    t_tree tree_Verbs = createEmptyTree();
    char ligne[50];
    while(fgets(ligne, 50, file) != NULL)
    {
        printf("\n%s", ligne);
        char declination[15], original[15], type[30];
        sscanf(ligne,"%s %s %s", declination, original, type);
        if (strstr(type,"Ver:")){
            printf("Declination:   %s\n", declination);
            printf("Original:   %s\n", original);
            printf("Type:   %s\n", type);
            if
        }
    }
}