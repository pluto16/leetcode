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

        vector<vector<int> > levelOrder(TreeNode* pRoot){
            vector<vector<int> > res;
            if(pRoot==NULL) return res;
            queue<TreeNode*> Q;
            Q.push(pRoot);
            int count = 0;
            int levCount =1;
            vector<int> levNodeValue ;
            while(!Q.empty())
            {
                TreeNode *cur = Q.front();
                levNodeValue.push_back(cur->value);
                Q.pop();
                levCount--;
                if(cur->lef){
                    Q.push(cur->left);
                    count++;
                }
                if(cur->right){
                    Q.push(cur->right);
                    count++;
                }
                if(levCount==0)
                {
                    res.push_back(levlevNodeValue);
                    levCount = cout;
                    count = 0;
                    levlevNodeValue.clear();

                }
            }
            std::reverse(res.begin(),res.end());
            return res;

        };

        


};

