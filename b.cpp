

/*
コンパイル
c++ -o b.out b.cpp
./b.out
*/
/*
int -> string: to_string( )
string -> int: (int)(c-'0')
ベクター: vector<int> v; 

*/

#include <iostream>
#include <cmath>
#include<bitset>
#include<vector>
#include<algorithm>
#include <string>
#define rep(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
using namespace std;
typedef long long ll;

ll dp[100005];
int main(){

    ll N;
    cin>>N;
    ll h[N];

    rep(i,0,N)cin>>h[i];


    dp[1]=0;
    for(int i=1;i<=N;i++){
        dp[i] = dp[i-1]+abs(h[i]-h[i-1]);

        if(i>=3){
            dp[i] = min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
        }

    }
    cout<<dp[N]<<endl;

    return 0;
}

