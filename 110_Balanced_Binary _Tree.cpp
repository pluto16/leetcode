

#include <iostream>
#include <algorithm>
#include <math>
typedef struct Node{

    Node* left;
    Node* right;
    int value;
}Node;

class solution {

    public:
        bool isBalanced(Node* pRoot){

            int h= getDepth(pRoot);
            return h!=-1?true:false;

        }
    public:
        int getDepth(Node* pRoot){
            if(pRoot==NULL) return 0;
            int lh = getDepth(pRoot->left);
            int rh = getDepth(pRoot->right);
            if(lh==-1 || rh ==-1 || abs(lh,rh)>1) return -1;
            else return 1+std::max(lh,rh);
        }

};