#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        int dp[n], ans = 0;
        vector<pair<int, int>> players;
        for(int i = 0; i < n; i++) 
            players.push_back({ages[i], scores[i]});
        sort(players.begin(), players.end());
        for(int i = 0; i < n; i++) {
            dp[i] = players[i].second;
            for(int j = 0; j < i; j++) {
                if(players[j].second <= players[i].second)
                    dp[i] = max(dp[i], dp[j] + players[i].second);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }


int main() {

    for(int z = 1; z <= 5; ++z){
        string pathone = "outputs\\output0" + to_string(z) + ".txt";
        freopen(pathone.c_str(), "w", stdout);

        string pathon = "inputs\\input0" + to_string(z) + ".txt";
        freopen(pathon.c_str(), "r", stdin);
    
    int t;
    cin>>t;
    
    while (t--){
        int a;
        cin>>a;

        vector<int> scores;
        vector<int> ages;
        for (int y=0;y<a;y++){
            int d;
            cin>>d;
            scores.push_back(d);
        }
        for (int m=0;m<a;m++){
            int e;
            cin>>e;
            ages.push_back(e);
        }
        


    
        int answer = bestTeamScore(scores,ages);
    
        cout<<answer<<endl;

    }
    }
}