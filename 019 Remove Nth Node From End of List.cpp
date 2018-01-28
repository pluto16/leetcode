/**
 * Definition for singly-linked list.
 * 
 **/
#include <iostream>
#include <algorithm>
#include <math>
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 


// Given linked list: 1->2->3->4->5, and n = 2.
// 1->2->3->5
 class solution{
     ListNode* Remove(ListNode* pRoot, int n ){

         
         vector<ListNode*> vec_p;
         ListNode* cur = pRoot;
         while(cur)
         {
            vec_p.push_back(cur);
            cur = cur->next;
         }
        if(n> vec_p.size() || n<=0) return pRoot;

        if(n == vec_p.size())
        {
            delete pRoot;
            return vec_p[1];
        }
        else{
            vec_p[vec_p.size() -n-1]->next = vec_p[vec_p.size() -n]->next;
            delete vec_p[vec_p.size() -n];
        }
        
     }


 };




