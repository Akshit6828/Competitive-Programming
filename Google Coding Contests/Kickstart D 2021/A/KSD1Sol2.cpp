#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define int long long



void solve(){
    int x[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            if(i==1&&j==1)
            continue;
            else
            cin>>x[i][j];
        }
    }

    /*
    00 01 02
    10 11 12
    20 21 22

    */
    int ans = 0;
   if(x[0][0] + x[0][2]==2*x[0][1])
   ans++;
   if(x[2][0] + x[2][2]==2*x[2][1])
   ans++;
   if(x[0][2] + x[2][2]==2*x[1][2])
   ans++;
   if(x[0][0] + x[2][0]==2*x[1][0])
   ans++;

   bool upcol,leftrow,righdiagnol,leftdiagnol;
   if((x[0][1]+x[2][1])&1==0){

   }


}

signed main(){
    boost;
    int t;
    int c=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<c++<<": ";
        solve();
    }
    
    return 0;
}