#include <iostream>
#include <algorithm>
#include <math>



class Solution{


    int mergeArray(int A[], int m, int B[], int n){
        
        int end = m+n-1;
        int endA = m-1;
        int endB = n-1;

        while(endA>=0 && endB>=0){
            if(A[endA]> B[endB]){
                A[end] = A[endA];
                --end;
                --endA;
            }
            else{
                A[end] = B[endB];
                --end;
                --endB;
            }
        }
        while(endB>0){
            A[end] = B[endB];
            --end;
            --endB;
        }

    };



};