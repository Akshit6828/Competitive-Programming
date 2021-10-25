#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    unsigned long n;
    cin>>n;
    if(n&1){
        cout<<-(n+1)/2;
    }
    else
    cout<<n/2;
}

int main(){
    boost;
    solve();
    return 0;
}