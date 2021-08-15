/* Probelm on Suffix Array

Solution Complexity = O(n+q)Time [n for suffix array and q * 1  for query as 1 query takes O(1) time. Thus q query = q*1 = q]
and O(1) for space a
*/

#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define end <<"\n";

void solve(){
      int n;
      cin>>n;
      vi x(n+1);
      vi prex(n+1);
      for(int i =1 ;i <=n ; i++)
          cin>>x[i];
      
      // Making suffix array
      for(int i = 2;i<=n ;i++)
      x[i]+=x[i-1];
    
      ll q,l,r;
      cin>>q;
      while(q--){
          cin>>l>>r;
             cout<<x[r]-x[l-1]<<"\n";
      }
    
}

int main(){
    boost;
    cout<<__gcd(5,6);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}