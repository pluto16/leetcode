// Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

// For example:
// Given the below binary tree and sum = 22,

//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \      \
//         7    2      1
//return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22


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

class soluton{

    public:
    bool hasPathsum(TreeNode* pRoot, int sum){
        if(pRoot == NULL ) return false;
        if(pRoot->left ==NULL && pNode->right==NULL && pRoot->val==sum) return true;
        if(pRoot->left&& hasPathsum(pRoot->left,sum - pRoot->val)) return true;
        if(pRoot->right&& hasPathsum(pRoot->right,sum - pRoot->val)) return true;
        return false;
    };


};