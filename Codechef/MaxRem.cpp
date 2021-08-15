#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 




int main(){
    eff;
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
    
    return 0;
}