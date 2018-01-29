#include <iostream>
#include <algorithm>
#include <math>
typedef struct Node{

    Node* left;
    Node* right;
    int value;
}Node;



class solution{

    Node* invertTree(Node* pRoot){
        if(pRoot== NULL) return NULL;
        Node* ptmpNode = pRoot->left;
        pRoot->left = invertTree(pRoot->right);
        pRoot->right = invertTree(ptmpNode);
        return pRoot;
    };


};