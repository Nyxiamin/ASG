#include <stdio.h>
#include "struct.h"
#include "struct.c"

int main() {
    printf("Hello, World!\n");
    FILE* file = NULL;
    file = fopen("C:\\Users\\borde\\Desktop\\Cours\\2ème année\\Projet ASG\\dictionnaire_non_accentue.txt", "r");
    p_tree tree_Verbs = Create_tree_verbs(file);
    return 0;
}

