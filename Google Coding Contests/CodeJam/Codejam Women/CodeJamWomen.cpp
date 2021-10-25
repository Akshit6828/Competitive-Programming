#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>



void solve(){

string f="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      int n;
      cin>>n;
      string ans="A";
      int x[n];
      for(int i=0;i<n;i++){
          cin>>x[i];
      }      
      int ind=1;
      for(int i=0;i<n;i++){
          int val=x[i]; 
          if(i!=n-1)
          int nxt_val=x[i+1];
          if(nxt_val-val>1){
          ans+=f.substr(ind,ind+val+1);
          ind=ind+val;
          }
          else{
              int minval=min(val,nxt_val);
              ans+=f.substr(ind,ind+minval);
              ind=ind+minval;
              ans+=f.substr(ind+1,ind+minval);
          }
          
      }
      cout<<ans <<endl;
      
      
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}