#include <iostream>
#include <algorithm>
#include <math>


class solution{
    public:
    int reverse(int x){

        int sign = 1;
        if(x<0){sign = -1; x =-x;}

        int Reverse_x = 0;
        while(x>0){
            Reverse_x =Reverse_x*10+x%10;
            x/=10;
        }
        return Reverse_x*sign;
    }
};