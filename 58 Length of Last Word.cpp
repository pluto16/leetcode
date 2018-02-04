

#include <vector>
#include <string>

using namespace std;

class Solution{
    public:
	int lenOfLast(string str) {
		int count = 0;
		vector<int> num;
		for (int i = 0; i< str.size(); ++i) {

			if (str[i] != ' ') {
				++count;
			}
			else {
				if (count > 0) num.push_back(count);
				count = 0;
			}
		}
		if (count > 0) num.push_back(count);
		if (num.size() > 0)
			return num[num.size() - 1];
		else
			return 0;
	};



}; 