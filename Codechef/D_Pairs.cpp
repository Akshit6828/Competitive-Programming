#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>


void solve(){
      ll N,D;
        cin>>N>>D;
       long x[N];
       for(ll i=0;i<N;i++)
           cin>>x[i];
        
       sort(x,x+N);
       ll count=0;
       for(ll i=0;i<N-1;i++){
           if(abs(x[i]-x[i+1])<=D)
            {  count++;
               i++;
            }
    
       }

      cout<<count<<"\n"; 
      
}

int main(){
    boost;
    solve();
    return 0;
}