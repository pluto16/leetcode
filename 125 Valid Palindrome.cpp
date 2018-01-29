


#include <iostream>

#include <string>

using namespace std;
class solution{

    public :
    bool isPalindrome(string s) {
        if(s.size()==0) return false;

        int left = 0;
        int right = s.size()-1;

        while(left<right){
            if(!isValidChar(s[left])){
                ++left;
                continue;
            }
            if(!isValidChar(s[right])){
                --right;
                continue;
            }
            if(change2Lower(s[left])!=change2Lower(s[right])){
                return false;
            }
            ++left;
            --right;

        }
        return true;

    };
    
    bool isValidChar(char c){
        return (('a'<=c && c<='z')||('A'<=c && c<='Z')||('0'<=c && c<='9'));
    };
    char change2Lower(char c){
        if('A'<=c && c<='Z'){
            return c + 'a' -'A';
        }
        return c;
    }
};