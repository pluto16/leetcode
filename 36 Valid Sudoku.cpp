

#include <cstring>
#include <vector>
using namespace std;
class solution{

    public:
        bool isValidSudoku(vector<vector<char>>& board){
            int vis[9] ={0};

            //each row
            for(int i=0; i< 9 ;++i){
                memset(vis,0,sizeof(vis));
                for(int j=0; j<9; ++j){

                    if(!isDigit(board[i][i])) continue;
                    if(vis[board[i][j]-'1']) return false;
                    vis[board[i][j]-'1'] = 1;
                }
                
            }
            //each col
            for(int j=0; j<9; ++j){
                memset(vis,0,sizeof(vis));
                for(int i=0; i< 9 ;++i){
                    if(!isDigit(board[i][j])) continue;
                    if(vis[board[i][j]-'1']) return false;
                    vis[board[i][j]-'1'] = 1;
                }

            }
            //each block
            for(int i =0 ;i<3; i+=3){
                for(int j =0 ;j<3; j+3){
                    memset(vis,0,sizeof(vis));
                    for(int r=0; r<3;++r ){
                        for(int c =0; c<3;++c  ){

                            if(!isDigit(board[i+r][j+c])) continue;
                            if(vis[board[i+r][j+c]-'1']) return false;
                            vis[board[i+r][j+c]-'1'] = 1;
                        }
                    }



                }
            }


        }
    private:
        bool isDigit(char c){
            return ('1'<= c && c<= '9');
        }


}