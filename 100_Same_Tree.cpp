


#include <iostream>
#include <algorithm>
#include <math>
typedef struct TreeNode{

    TreeNode* left;
    TreeNode* right;
    int value;
}TreeNode;

class solution{


    public:
        bool isSameTree(TreeNode* pRootA,TreeNode* pRootB){
            if(pRootA==NULL && pRootB==NULL) return true;
            else if(pRootA==NULL && pRootB!=NULL) return false;
            else if(pRootA!=NULL && pRootB==NULL) return false;
            else {
                if(pRootA->value != pRootB->value ) 
                    return false;
                else 
                    return isSameTree(pRootA->left,pRootB->left)&&isSameTree(pRootA->right,pRootB->right);
            }


        };


};