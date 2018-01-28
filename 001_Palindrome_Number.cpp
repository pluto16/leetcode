#include <cmath>

class sulution{
    public:
         bool isPalindrome(int x){

        if(x<0) return false;
        int tmp =x;
        int digits =0;
        while(tmp!=0){
            tmp /=10;
            digits++;
        }

        for(int i=1; i<=digits; ++x){
            int low = i;
            int high = digits+1-i;
            if(getDigit(x,low)!=getDigit(x,high))
                return false;
        }
        return true;
    }
    private:
        int getDigit(int x, int i){
            if(i==1) return (x%10);
            return ((x/(int)pow(10,i-1) )%10);
        }

}
