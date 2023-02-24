#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<string>>& board) {
        queue<pair<int, int>> q;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            if(i==0 || j==0 || i==m-1 || j==n-1)
            if(board[i][j]=="O")
            {
                q.push({i, j});
                board[i][j]="a";
            }
        }
        int v[5]={-1, 0, 1, 0, -1};
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int r=p.first+v[i];
                int c=p.second+v[i+1];
                if(r>0 && r<m && c>0 && c<n && board[r][c]=="O")
                {
                    q.push({r, c});
                    board[r][c]="a";
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=="a")
                board[i][j]='O';
                else if(board[i][j]=="O")
                board[i][j]='X';
            }
        }
    }
int main() {

    for(int i = 1; i <= 5; ++i){
        string pathone = "outputs\\output0" + to_string(i) + ".txt";
        freopen(pathone.c_str(), "w", stdout);

        string pathon = "inputs\\input0" + to_string(i) + ".txt";
        freopen(pathon.c_str(), "r", stdin);
    
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<vector<string>> maino;

        for (int g=0;g<a;g++){
            vector<string> maint;
            for (int h=0;h<b;h++){
                string z;
                cin>>z;
                maint.push_back(z);

            }
            maino.push_back(maint);
        }
        solve(maino);

        for (int g=0;g<a;g++){
            // vector<string> maint;
            for (int h=0;h<b;h++){
                // string z;
                // cin>>z;
                // maint.push_back(z);
                cout<<maino[g][h]<<" ";
            }
            cout<<endl;
            // maino.push_back(maint);
        }
        
        // cout<<<<endl;
    }
    }
}