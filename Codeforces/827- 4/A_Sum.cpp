#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



bool solve(){
      int a,b,c;
      cin>>a>>b>>c;
      return (a+b == c) || (b+c == a) || (a+c == b);
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--){
        bool res = solve();
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
        }
    return 0;
}