//
// Created by zhang on 18/10/2022.
//
#include <stddef.h>

#ifndef PROJET_L2C_STRUCT_H
#define PROJET_L2C_STRUCT_H

struct s_node
{
    int value;
    struct s_node   *left, *right;
    int depth;
};

typedef struct s_node t_node, *p_node;


typedef struct s_tree
{
    p_node root;
} t_tree, *p_tree;

struct s_cell
{
    int value;
    struct s_cell *next;
};
typedef struct s_cell t_cell, *p_cell;


typedef struct s_std_list
{
    p_cell head;
} t_std_list;



t_tree createEmptyTree();
t_std_list Create_Struct();


#endif //PROJET_L2C_STRUCT_H