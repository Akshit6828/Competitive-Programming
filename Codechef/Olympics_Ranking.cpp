#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>



void solve(){
      int a,b,c,d,e,f;
      cin>>a>>b>>c>>d>>e>>f;

      if(a+b+c>f+d+e)
        cout<<"1" <<"\n"; 
        else
        cout<<"2" <<"\n"; 
        
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}