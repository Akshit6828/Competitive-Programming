#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
          int x;
          cin>>x;
          int ans =0;
          if(x%5==0)
          ans = x/5;
          else
          ans= (x/5)+1;
          cout<<ans;  
}

int main(){
    boost;
    solve();
    return 0;
}