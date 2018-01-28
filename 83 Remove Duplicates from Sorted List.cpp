
//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3

#include <iostream>
#include <algorithm>
#include <math>
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 


 class solution{
     
     public:
     ListNode * RemoveDuplicates(ListNode * pRoot){
        
        ListNode* p1 = pRoot;
        while(p1 && p1->next){
            ListNode* p2= p1->next;
            while(p2 && p1->value == p2->value){
                p1->next = p2->next;
                delete p2;
                p2 = p1->next;
            }
            p1 = p1->next;
        }

        return pRoot;
     };

 };