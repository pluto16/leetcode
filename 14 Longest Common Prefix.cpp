



#include "algorithm"
#include <vector>
#include <string>
using namespace std;
class Solution{
    public:
    string  longestPrefixCommon(vector<string> vstr){
        if(vstr.empty()) return "";

        sort(vstr.begin(), vstr.end());


        for(size_t i =0; i<vstr[0].size();++i){

            for(size_t j = 1; j< vstr.size(); ++j){
                if(vstr[j][i]!= vstr[0][1]){
                    return vstr[0].substr(0,i);
                }
            }
        }
        return vstr[0];

    };


};