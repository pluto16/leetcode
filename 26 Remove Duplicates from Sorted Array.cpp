
#include <iostream>
#include <algorithm>
#include <math>
#include <vector>



//Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
//Do not allocate extra space for another array, you must do this in place with constant memory.
//For example,
//Given input array A = [1,1,2],
//Your function should return length = 2, and A is now [1,2]
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int pos =1;
        for(int i=1; i< nums.size(); ++i)
        {
            if(nums[pos-1]!= nums[i]){
                nums[pos] = nums[i];
                ++pos;
            }
        }
        return pos;

    }

}

