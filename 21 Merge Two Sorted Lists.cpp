
#include <iostream>
#include <algorithm>
#include <math>
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution{

    ListNode* Merge(ListNode* A, ListNode* B){
        if(A == NULL) return B;
        if(B == NULL) return A;

        ListNode* pHead = NULL;
        ListNode* pMovingHeadA =A;
        ListNode* pMovingHeadB =B;

        if(pMovingHeadA->val <= pMovingHeadB->val){
            pHead = pMovingHeadA;
            pMovingHeadA= pMovingHeadA->next;
        } 
        else {
            pHead = pMovingHeadB;
            pMovingHeadB = pMovingHeadB->next;
            
        }
        ListNode* pMovingHead = pHead;
        while(pMovingHeadA && pMovingHeadB){
            if(pMovingHeadA->val < pMovingHeadB->val){
                pMovingHead->next = pMovingHeadA;
                pMovingHead = pMovingHeadA;
                pMovingHeadA = pMovingHead->next;
            } 
            else {
                pMovingHead->next = pMovingHeadB;
                pMovingHead = pMovingHeadB;
                pMovingHeadB = pMovingHead->next;
            }
        }
        if(pMovingHeadA==NULL) pMovingHead->next = pMovingHeadB;
        else pMovingHead->next = pMovingHeadA;
         
        return pHead;

    };


};