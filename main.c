#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
#include "struct.c"

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("dictionnaire_non_accentue.txt", "r+");
    p_tree tree_Verbs = Create_tree_verbs(fp);

    return 0;
}

