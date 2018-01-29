

#include <string>
using namespace std;
class solution{


    public:
        string Addstring(string a, string b) {
            string longer;
            string shorter;
            if (a.size() >= b.size()) {
                longer = a;
                shorter = b;
            }
            else {
                longer = b;
                shorter = a;
            }
            char bit = '0';
            string out; out.clear();
            for (size_t i = 0; i < longer.size(); ++i) {

                char shorter_char = '0';
                char longer_char = '0';
                if (i >= shorter.size())
                {
                    shorter_char = '0';
                    longer_char = longer[longer.size() - 1 - i];
                }
                else {
                    longer_char = longer[longer.size() - 1 - i];
                    shorter_char = shorter[shorter.size() - 1 - i];
                }
                //s    0 1 0 1
                //l    0 0 1 1
                //b    0 0 0 0
                //sum  0 1 1 0
                //b    0 0 0 1 
                

                if (bit == '0') {
                    if ((shorter_char - '0' + longer_char - '0') == 1) {
                        out.push_back('1');
                    }
                    else {
                        out.push_back('0');
                    }
                    if ((shorter_char - '0' + longer_char - '0') == 2) {
                        bit = '1';
                    }

                }
                
                //s    0 1 0 1
                //l    0 0 1 1
                //b    1 1 1 1
                //sum  1 0 0 1
                //b    0 1 1 1
                else {
                    if ((shorter_char - '0' + longer_char - '0') == 1) {
                        out.push_back('0');
                    }
                    else {
                        out.push_back('1');
                    }
                    if ((shorter_char - '0' + longer_char - '0') == 0) {
                        bit = '0';
                    }
                }
            }
            if (bit == '1') {
                out.push_back('1');
            }
            for (size_t i = 0; i< out.size() / 2; ++i) {
                char c  = out[i];
                out[i] = out[out.size() - 1 - i];
                out[out.size() - 1 - i] = c;
            }
            return out;
	    }
}