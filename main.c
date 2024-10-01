//
// Created by Work on 2024-09-30.
//
#include <malloc.h>
#include <string.h>
#include "my_tree.h"
int main (){
    struct Tree* tree = newTree();
    labelTree(tree, "Tree");

    struct Tree* branch1 = newTree();
    labelTree(branch1, "Branch1");
    addLeftBranch(tree,branch1);

    struct Tree* branch2 = newTree();
    labelTree(branch2, "Branch2");
    addRightBranch(tree,branch2);

    struct Tree* leaf1 = newTree();
    labelTree(leaf1, "Leaf1");
    addLeftBranch(branch1,leaf1);

    struct Tree* leaf2 = newTree();
    labelTree(leaf2, "Leaf2");
    addRightBranch(branch1,leaf2);

    struct Tree* leaf3 = newTree();
    labelTree(leaf3, "Leaf3");
    addLeftBranch(branch2,leaf3);



    print(tree, "");

}
