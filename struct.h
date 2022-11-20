//
// Created by zhang on 18/10/2022.
//
#include <stddef.h>

#ifndef PROJET_L2C_STRUCT_H
#define PROJET_L2C_STRUCT_H



int* Sort_types_Verbs(FILE *);
int* Sort_types_Nouns(FILE *);
int* Sort_types_Adjectives(FILE *);
int Sort_types_Adverbs(FILE *);

int pick_noun(const int*);
void pick_adjective(const int*, int);
void pick_verb(const int*, int);
void pick_adverb(int);
void create_phrase1(const int*, const int*, const int*, int);
void create_phrase2(const int*, const int*, const int*, int);
void create_phrase3(const int*, const int*, const int*, int);
void create_phrase4(const int*, const int*, const int*, int);
void create_phrase5(const int*, const int*, const int*, int);


void find_a_word(const int*, const int*, const int*, int);
void explain_a_word();

#endif //PROJET_L2C_STRUCT_H