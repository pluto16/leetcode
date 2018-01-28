



#include <iostream>
#include <algorithm>
#include <math>


class solution{
    int removeElement(int* A , int nLen ,int elem){
        int pos =0 ;
        for(int i=0; i< nLen;++i){
            if(A[i]!=elem){
                A[pos] = A[i];
                ++pos;
            }
        }
        return pos;
    }

}