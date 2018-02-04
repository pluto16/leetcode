#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

/*
1. discards all leading whitespaces
2. sign of the number
3. overflow
4. invalid input
*/
using namespace std;
class solution{
    public:
    int atoi(string Str){
        int sign = 1; 
        int base =0;
        int i=0;
        while(i<Str.size() && Str[i]==' ') {
            i++;
        }
        if(i<Str.size()&&(Str[i] =='-' ||Str[i] =='+')){
            sign = Str[i] =='-'?-1:1;            
        }
        while(i<Str.size() && '0'<=Str[i] && Str[i]<='9'){
            if(base> INT_MAX/20 || (base == INT_MAX / 10 && Str[i] - '0' > 7) ){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            base = 10*base + (Str[i++]-'0');
        }
        return base*sign;


        

    };



};