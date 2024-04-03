#include "arvbin.h"

void criaArv(ArvBin *tree){
    ArvBin *new_tree_ptr, new_tree;

    new_tree_ptr = &new_tree;

    new_tree_ptr = malloc(sizeof(ArvBin));
    if(!new_tree_ptr) return;

    new_tree->item = NULL;
    new_tree->esq = NULL;
    new_tree->dir = NULL;

    tree = new_tree_ptr;
    return;
}

int arvVazia(ArvBin tree){
    int vazia = 1;

    if(tree->esq != NULL || tree->dir != NULL || tree->item != NULL)
        vazia = 0;

    return vazia;
}

ArvBin insereArv(ItemArv key, ArvBin tree){
    ApNodo new_node;

    new_node->item = key;
    new_node->dir = NULL;
    new_node->esq = NULL;

    ApNodo actual = tree, father = NULL;
    while(actual != NULL){
        father = actual;
        if(new_node->item < actual->item){
            actual = actual->esq;
        }
        else{
            actual = actual->dir;
        }
    }

    if(father == NULL){
        tree = new_node;
    }
    else{
        if(new_node->item < father->item){
            father->esq = new_node;
        }
        else{
            father->dir = new_node;
        }
    }

    return tree;
}