#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define int long long



void solve(){
    int n,p,k;
    cin>>n>>p>>k;
    int r = p/k;
    int c = p%k;     
    int full_rows = n/k;
    int left_val = n%k;
    int ans =0;
    ans+= c*full_rows;
    
    if(c>0){
        if(c<left_val){
        ans+= c;
    }
    else if(c>=left_val){
        ans+=left_val;
    }
    }
    ans+= r+1;
    cout<<ans <<"\n"; 
}


solveAmisha(){
   int n,p,k;
   cin>>n>>p>>k;
   ll r=0,c=0;
        c = p%k;
        r = p/k;
        if(n%k == 0)
            cout<<((c*n/k) + (r+1))<<"\n";
        else if(n%k != 0)
        {
           // cout<<"n-1%k"<<(n-1)%k<<"\n";
            //cout<<"p%k"<<p%k<<"\n";
            if((n-1)%k < p%k)
                 cout<<((c*n/k) + (r+1) + (n%k))<<"\n";
            else
                 cout<<((c*n/k) + (r+1) + (p%k))<<"\n";
        }
} 
signed main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}