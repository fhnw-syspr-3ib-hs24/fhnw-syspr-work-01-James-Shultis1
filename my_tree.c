//
// Created by js on 9/30/24.
//

#include <malloc.h>
#include <string.h>
#include "my_tree.h"

void addLeftBranch(struct Tree* parent, struct Tree* child){
    parent->left = child;
}
void addRightBranch(struct Tree* parent, struct Tree* child){
    parent->right = child;
}
void labelTree(struct Tree* tree, char* label){
    if(strlen(label) <= 32) tree->label = strdup(label);
}
void print(struct Tree* tree, char* prefix){
    char *level = strdup(prefix);
    sprintf(level , "--- %s", level);

    printf("%s %s \n", level, tree->label);
    if(tree->right) {
        print(tree->right, level) ;
    };
    if(tree->left) {
        print(tree->left, level);
    };
    free(level);

}

struct Tree* newTree(){
    struct Tree* tree = (struct Tree*) malloc(sizeof(struct Tree));
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

void destroy(struct Tree* parent){
    if(parent->right){
        destroy(parent->right);
        parent->right = NULL;
    };
    if (parent->left){
        destroy(parent->left);
        parent->left = NULL;
    }
    free(parent->label);
    free(parent);
}





