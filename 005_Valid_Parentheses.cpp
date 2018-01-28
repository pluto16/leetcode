

#include <string>
using namespace std;

class solution{
    public:
        bool isValid(string s){
            if (s.size() % 2 == 1) return false;
            for (size_t i = 0; i< s.size(); i += 2) {
                if (s[i] =='(' &&  s[i + 1] !=')') {
                    cout << s[i] << " " << s[i + 1] << endl;
                    return false;
                }
                if (s[i] == '[' &&  s[i + 1] != ']') {
                    cout << s[i] << " " << s[i + 1] << endl;
                    return false;
                }
                if (s[i] == '{' &&  s[i + 1] != '}') {
                    cout << s[i] << " " << s[i + 1] << endl;
                    return false;
                }
                    
            }
            return true;
        };
};