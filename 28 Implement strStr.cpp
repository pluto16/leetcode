
#include <vector>
#include <string>
using namespace std;
 //O(m+n) KMP pattern matching
class Solution{
    public:
	vector<int> Prefix(string str) {
		vector<int> prefix(str.size(), 0);
		int j = 0;
		int i = 1;
		while(i < str.size()) {
			if (str[j] == str[i]) {
				prefix[i] = j + 1;
				j++;
				i++;
			}
			else if(j>0) {
				j = prefix[j - 1];
			}
			else {
				prefix[i] = 0;
				i++;
			}
		}
		return prefix;
	};

	int strStr(string str, string pattern) {
		if (pattern.empty() || str.empty()) return -1;
		vector<int> prefix = Prefix(pattern);
		int j = 0;
		int i = 0;
		while (i < str.size() && j< pattern.size() ) {
            if (str[i] == pattern[j]) {
                i++; j++;
            }
            else if (j > 0) {
                j = prefix[j - 1];
            }
            else {
                i++;
            }
		}
		return j == pattern.size() ? i - j: -1;

	};


};