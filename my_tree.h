//
// Created by js on 9/30/24.
//

#ifndef FHNW_SYSPR_WORK_01_JAMES_SHULTIS1_MY_TREE_H
#define FHNW_SYSPR_WORK_01_JAMES_SHULTIS1_MY_TREE_H
struct Tree{
    struct Tree* left;
    struct Tree* right;
    char* label;
};
void addLeftBranch(struct Tree*, struct Tree*);
void addRightBranch(struct Tree*, struct Tree*);
void labelTree(struct Tree*, char*);
void print(struct Tree*, char*);
void destroy(struct Tree*);
struct Tree* newTree();
#endif //FHNW_SYSPR_WORK_01_JAMES_SHULTIS1_MY_TREE_H
