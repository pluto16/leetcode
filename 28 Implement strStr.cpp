

#include <string>
using namespace std;
class Solution{
    public:
	vector<int> Prefix(string str) {
		vector<int> prefix(str.size(), 0);
		int j = 0;
		for (int i = 1; i < str.size(); ++i) {
			if (str[j] == str[i]) {
				prefix[i] = j + 1;
				j++;
				
			}
			else {
					j -= 1;
					while (j >= 0) {
						j = prefix[j];
						if (str[j] == str[i])
						{
							prefix[i] = j + 1; break;
						}
						else {
							j -= 1;
						}
					}
					if (j < 0) {
						prefix[i] = 0;
						j = 0;
					}	
			}
			cout << "i=" << i << ",j=" << j <<", prefix[i]="<<prefix[i]<< endl;


		}
		return prefix;
	};

	int strStr(string str, string pattern) {
		if (pattern.empty() || str.empty()) return -1;

		vector<int> prefix = Prefix(pattern);

		int j = 0;
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] == pattern[j]) {
				++j;
			}
			else {
				j = prefix[j];
				j -= 1;
				while (j >= 0) {
					if (str[i] == pattern[j])
					{
						++j; break;
					}
					else
					{
						j = prefix[j];
						j -= 1;
					}
				}
				if (j < 0) j = 0;
			}
			if (j == pattern.size()) return i-pattern.size()+1;

		}
		
		return -1;

	};


};