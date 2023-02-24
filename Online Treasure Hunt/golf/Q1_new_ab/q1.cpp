#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool isValidNeighbour(int x,int y, vector<vector<int>>& board){
        return(x>=0 && x<board.size() && y>=0 && y<board[0].size());
    }
    vector<vector<int>> gameOfLife(vector<vector<int>>& board) {
        vector<int> dx = {0,0,1,1,1,-1,-1,-1};
        vector<int> dy = {1,-1,1,-1,0,0,1,-1};{
        
        for(int row=0; row<board.size();row++)
            for(int column=0; column<board[0].size(); column++){
                int countLive=0;

                for(int i=0;i<8;i++){
                    int curr_x = row+dx[i], curr_y = column+dy[i];
                    if(isValidNeighbour(curr_x,curr_y,board) && abs(board[curr_x][curr_y])==1)
                     countLive++;
                }

                if(board[row][column]==1 && (countLive<2 || countLive>3))
                 board[row][column]=-1;

                if(board[row][column]==0 && countLive==3)
                 board[row][column]=2;
            }
        }
        for(int row=0; row<board.size(); row++){
            for(int column=0; column<board[0].size(); column++){
                if(board[row][column]>=1)
                  board[row][column]=1;
                else
                  board[row][column]=0;
            }
        }
        return board;

    }






int main() {

    for(int i = 1; i <= 5; ++i){
        string pathone = "outputs\\output0" + to_string(i) + ".txt";
        freopen(pathone.c_str(), "w", stdout);

        string pathon = "inputs\\input0" + to_string(i) + ".txt";
        freopen(pathon.c_str(), "r", stdin);
    
        int t;
        cin>>t;
        while (t--){
            vector<vector<int>> mat;
            int a,b;
            cin>>a>>b;
            for (int j=0;j<a;j++){
                

                vector<int> matone;
                for (int m = 0;m<b;m++){
                    int c;
                    cin>>c;
                    matone.push_back(c);
                    
                }
                mat.push_back(matone);
                // cout << a<<" "<<b<<" "<<c;
                // cout<<endl;
            }
            vector<vector<int>> out = gameOfLife(mat);
            for (int j=0;j<a;j++){
                

                // vector<int> matone;
                for (int m = 0;m<b;m++){
                    // int c;
                    // cin>>c;
                    // matone.push_back(c);
                    cout<<out[j][m]<<" ";
                    
                }
                cout<<endl;
                // mat.push_back(matone);
                // cout << a<<" "<<b<<" "<<c;
                // cout<<endl;
            }

        }
    }
}