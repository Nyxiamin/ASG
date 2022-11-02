#include "Struct.h"
#include <stdio.h>

t_tree createEmptyTree(){
    t_tree new_tree;
    new_tree.root = NULL;
    return new_tree;
}

t_std_list Create_Struct(){
    t_std_list list;
    t_tree tree_Verbe = createEmptyTree();
    t_tree tree_Nom = createEmptyTree();
    t_tree tree_Adjectif = createEmptyTree();
    t_tree tree_Adverbes = createEmptyTree();



    return list;
}