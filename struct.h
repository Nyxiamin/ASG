//
// Created by zhang on 18/10/2022.
//
#include <stddef.h>

#ifndef PROJET_L2C_STRUCT_H
#define PROJET_L2C_STRUCT_H

struct s_node
{
    int value;
    struct s_node   *left, *middleL, *middleR, *right;
    int depth;
};

typedef struct s_node t_node, *p_node;


typedef struct s_tree
{
    p_node A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
} t_tree, *p_tree;

struct s_cell
{
    p_tree value;
    struct s_cell *next;
};
typedef struct s_cell t_cell, *p_cell;


typedef struct s_std_list
{
    p_cell head;
} t_std_list;



t_tree createEmptyTree();
p_tree Create_tree_verbs(FILE *);


#endif //PROJET_L2C_STRUCT_H