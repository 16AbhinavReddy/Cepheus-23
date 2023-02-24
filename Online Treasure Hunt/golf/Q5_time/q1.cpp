#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    for(int i = 1; i <= 8; ++i){
        string pathone = "outputs\\output0" + to_string(i) + ".txt";
        freopen(pathone.c_str(), "w", stdout);

        string pathon = "inputs\\input0" + to_string(i) + ".txt";
        freopen(pathon.c_str(), "r", stdin);
    
    int t;
    cin>>t;
    
    while(t--){
        int t, s, q;
        cin>>t>>s>>q;
        int sum = 0;
        while(s < t)
        {
            s *= q;
            sum++;
        }
        cout<<sum<<endl;
    }
    }
}