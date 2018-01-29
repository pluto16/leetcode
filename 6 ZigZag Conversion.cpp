
#include <string>
#include <vector>
using namespace std;
class solution{

    public:
        string convert(string text, int nRows){
            
            int batchNum = 2*nRows -2;
            vector<int> RowNumInBatch(batchNum,0);
            for(int i=0; i<batchNum;++i ){
                if(i<= nRows-1) {
                    RowNumInBatch[i] = i;
                }
                else{
                    RowNumInBatch[i] = RowNumInBatch[batchNum-i];
                }
            }
            vector<int> RowNumOfString(text.size(),0);
            for(size_t i = 0; i < text.size();++ i)
            {
                RowNumOfString[i] = RowNumInBatch[i%batchNum];
            }
            string out;
            out.clear();
            for(int row_id=0; row_id< nRows;++row_id ){
                for(size_t char_id=0; char_id<RowNumOfString.size();++char_id ){
                    if(RowNumOfString[char_id]==row_id){
                        out.push_back(text[char_id] );
                    }
                }
            }


            
        }


};


