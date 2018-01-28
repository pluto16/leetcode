#include <iostream>
#include <algorithm>
#include <math>
#include <vector>

class Solution{


    public:
        vector<int> PlusOne(vector<int> nums){
            if(nums.size()==0) return vector<int>(1,1);

            int carry = 0;
            for(size_t i = 0;i < nums.size(); ++i){

                if(nums[nums.size()-1 -i ]==9){
                    carry = 1;
                    nums[nums.size()-1 -i ] =0;

                }
                else{
                    nums[nums.size()-1 -i ]+=1;
                    return nums;
                }

            }
            if(carry ==1){
                vector<int> res( nums.size()+1,1);
                for(size_t i = 0;i < nums.size(); ++i){
                    res[i+1] = nums[i];
                }
                return res;
            }

        };
}