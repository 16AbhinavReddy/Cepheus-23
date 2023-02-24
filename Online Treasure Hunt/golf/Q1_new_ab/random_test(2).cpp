#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define M 200000

namespace random_tests {
    // Use this with srand(time(0)) in main()
    int random(int l, int r) {
        return l + rand() % (r - l + 1);
    }
    //Source: http://codeforces.com/blog/entry/61587
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    // Better function to use
    int getRand(int l, int r) {
        uniform_int_distribution<int> uid(l, r);
        return uid(rng);
    }
}
using namespace random_tests;

char arr[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

int main(){
    // cout << getRand(1, 588);
    // freopen("D:\\Documents\\GoMyno\\FizzBuzz Questions\\Q1\\input12.txt", "r", stdin);
    for(int i = 1; i <= 5; ++i){
        string pathone = "inputs\\input0" + to_string(i) + ".txt";
        freopen(pathone.c_str(), "w", stdout);
    

    // int t;
    // cin >> n;
    // t = getRand(1,1000);
    // cout << n<<'\n';
    // int arr[n];
    // int maxsum = 500;
    // cout << t<<'\n'; 
    // int temp = t;
    int n, k;
    n = getRand(1, i*(20));
    cout << n<<'\n';

    for (int j=0;j<n;j++){
        int a = getRand(1, 25);
        int b = getRand(1, 25);
        cout<<a<<" "<<b<<endl;
        
        for (int m = 0;m<a;m++){
            for (int u=0;u<b;u++){
                int bo = getRand(0,1);
                cout<<bo<<" ";
            }
            cout<<endl;
        }
        // cout << a<<" "<<b<<" "<<c;
        // cout<<endl;
    }
    // while (true){
    //     if (temp > 10){
    //         char charnum = arr[getRand(0,25)];
    //         int rep = getRand(1,10);
    //         for (int i=0;i<rep;i++) cout << charnum;
    //         temp -= rep;
    //     }
    //     else{
    //         for (int i=0;i<temp;i++){

    //             char charnum = arr[getRand(0, 25)];
    //             cout << charnum;
    //         }
    //         break;
    //     }


    // }
    // for (int i=0;i<t;i++) {
    //     int n = getRand(2, 1000);
    //     // int maxM = min(M, n);
    //     int m = getRand(2, n);

    //     cout << n <<" "<<m<<'\n';
    //     for (int j=0;j<m;j++){
    //         int x = getRand(1, n / 2);
    //         int y = getRand(n/2+1,n);

    //         int t = getRand(0, 1);

    //         cout << t << " " << x << " " << y << '\n';
    //     }
    // for (int i=0;i<t;i++){
    //     int n = getRand(1,1000);
    //     cout << n<<'\n';
    //     char arr[2] = {'w', 'o'};
    //     string s="";
    //     for (int j=0;j<n;j++){
    //         int pos = getRand(0, 1);
    //         s+= arr[pos];

    //     }
    //     cout << s<<'\n';
        

    // }
    // for (int j=0;j<t;j++){
    //     int n = getRand(1,1000);
    //     cout << n <<'\n';
    //     for (int i=0;i<2;i++){
    //         // int a = getRand(1,n);
    //         // int b = getRand(1,n);
    //         for (int k=0;k<n;k++) cout << getRand(1,100)<<" ";
    //         cout <<'\n';

    //     }
    // }

        

        // cin >> arr[i];
        // arr[i] = getRand(2,maxsum);
        // maxsum-=arr[i];
        // cout << arr[i]<<'\n';

    

    // int sum = 
    // int sum;
    // sum=0;
    // for (int x:arr) sum+=x;
    // cout << sum;


    }

}