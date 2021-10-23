#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
      int a,b,c;
      cin>>a>>b>>c;
      if(a==7||b==7||c==7)
      cout<<"YES\n";  
      else
      cout<<"NO\n"; 
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}