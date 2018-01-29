
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
        ListNode* pMovingHead =NULL;
        ListNode* pMovingHeadA =NULL;
        ListNode* pMovingHeadB =NULL;

        if(A->val < B->val){
            pHead= A;
            pMovingHead =A;
            pMovingHeadA = A->next;
            pMovingHeadB = B;
        } 
        else {
            pHead=B;
            pMovingHead =B;
            pMovingHeadA = A;
            pMovingHeadB = B->next;
        }
        while(pMovingHeadA || pMovingHeadB){

            if(pMovingHeadB==NULL && pMovingHeadA){
                pMovingHead->next = pMovingHeadA;
                pMovingHead = pMovingHeadA;
                pMovingHeadA = pMovingHead->next;
            }
            else if(pMovingHeadA==NULL && pMovingHeadB ){
                pMovingHead->next = pMovingHeadB;
                pMovingHead = pMovingHeadB;
                pMovingHeadB = pMovingHead->next;
            }
            else if( pMovingHeadB&&pMovingHeadA ){
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


        }
        
        return pHead;

    };


};