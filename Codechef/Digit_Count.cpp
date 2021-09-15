#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
      int n,k;
      cin>>n>>k;
      vector<int> x(n);
      for(int i =0;i<n;i++)
      cin>>x[i];
      int ans=0;
      for(int &i:x){
          if(floor(log10(i)+1)==k)
          ans++;
      }
      cout<<ans<<endl;
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}