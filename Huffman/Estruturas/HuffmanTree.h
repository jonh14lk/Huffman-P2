#ifndef tree_h
#define tree_h

#include "Types.h"

//Função para criar um nó da hash com frequência 1.
huff_node* create_node(unsigned char *element, huff_node *left, huff_node *right); 

//Função que cria um nó que será pai dos dois primeiros elementos da heap
huff_node* merge_nodes(huff_node *left, huff_node *right);

//Função que retorna 1 caso o nó seja folha e 0 caso contrário.
int is_leaf(huff_node *node);

#endif