#include <iostream>
#include <algorithm>
#include <math>
#include <string>


typedef struct TreeNode{

    TreeNode* left;
    TreeNode* right;
    int value;
    TreeNode(int x, ){}
}TreeNode;



class Solution{

    public:
    int maxDepth(TreeNode* pRoot){
        if(pRoot==NULL) return 0;
        else{
            int depth = std::max(maxDepth(pRoot->left), maxDepth(pRoot->right))+1;
            return depth;
        }

    }


};