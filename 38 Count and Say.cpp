
#include <vector>
#include <string>

using namespace std;

class Solution{
    public:
    string countSay(int n) {
		if (n == 1 || n==0) return "1";

		else {

			string last = countSay(n - 1);
			vector<char> vec_char;
			vector<int> vec_num;
			vec_char.push_back(last[0]);
			int count = 1;
			for (size_t i = 1; i < last.size(); ++i) {
				if (last[i] != vec_char[vec_char.size() - 1]) {
					vec_num.push_back(count);
					vec_char.push_back(last[i]);
					count = 1;
				}
				else {
					count += 1;
				}

			}
			vec_num.push_back(count);

			string out = "";

			for (size_t i = 0; i < vec_char.size(); ++i) {
				char buf[20];
				sprintf_s(buf,20, "%d", vec_num[i]);
				string str = buf;
				str += vec_char[i];
				out += str;
			}
			return out;
		}


	};

    
};