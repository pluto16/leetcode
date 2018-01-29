


#include <iostream>
#include <algorithm>
#include <math>
typedef struct TreeNode{

    TreeNode* left;
    TreeNode* right;
    int value;
    TreeNode(int x, ){}
}TreeNode;

class solution {

    public: 
        bool isSymmetric(TreeNode* pRoot){

            if(pRoot==NULL) return true;

            else
                return isSymmetricHelper(pRoot->left,pRoot->right);


        };
        bool isSymmetricHelper(TreeNode* pLeft, TreeNode* pRight){

            if(pLeft==NULL &&pRight ==NULL) return true;
            else if( pLeft==NULL || pRight ==NULL) return false;
            else if( pLeft->value!= pRight->value )return false;

            else
                return isSymmetricHelper(pLeft->left,pRight->right) &&  isSymmetricHelper(pLeft->right,pRight->left) 


        }
}




