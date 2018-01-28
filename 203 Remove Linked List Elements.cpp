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
    ListNode * removeElements(ListNode * pRoot,int val){
        
 
        if(pRoot==NULL) return pRoot;
        ListNodet* p1 = pRoot;
        ListNodet* p2 = p1->next;
        while(p2!=NULL){
            if(p2->val == val ){
                p1->next = p2->next;
                delete p2;
                p2 = p1->next;

            }else{
                
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        if(pRoot->val == val ){
            p1 = pRoot;
            pRoot = pRoot->next;
            delete p1;
        }
        return pRoot;
    };



 };