#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

t_tree createEmptyTree(){
    t_tree new_tree;
    new_tree.root = NULL;
    return new_tree;
}

p_tree Create_tree_verbs(FILE * file){
    t_tree tree_Verbs = createEmptyTree();
    if (file != NULL)
    {
        fclose(file);
        // On peut lire et écrire dans le fichier
        printf("Ouvert!");
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
}