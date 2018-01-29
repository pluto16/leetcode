#include <iostream>
#include <algorithm>
#include <math>
#include <string>
#include <queue>

typedef struct TreeNode{

    TreeNode* left;
    TreeNode* right;
    int value;
    TreeNode(int x, ){}
}TreeNode;



class Solution{

    public:
    int minDepth(TreeNode* pRoot){
        if(pRoot==NULL) return 0;
     
        queue<TreeNode*> Q;
        Q.push(pRoot);
        int depth = 1;
        int levcount  =1;
        int count =0;
        while(!Q.empty()){
            TreeNode* pNode = Q.front();
            Q.pop();
            levcount--;
            
            if(pNode->left){
                Q.push(pNode->left);
                count++;
            }
            if(pNode->right){

                Q.push(p->right);
                count++;
            }

            if(pNode->left==NULL && pNode->right==NULL)
            {
                return depth;
            }
            if(levcount==0)
            {
                depth+=1;
                levcount =count;
                count =0;
            }
        }

    }


};