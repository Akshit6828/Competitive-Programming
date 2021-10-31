#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
     unsigned ll  k;
    cin >> k;
    unsigned ll n = k;
    k = (ll)sqrt(2 * k + (1/4)) - (1/2); // ((2*k + 0.25) - 0.5)
    k = floor(k);
    ll ans = (k + 1) * k;
    ans = ans/2;
    if (ans >= n)
        k--;
    cout << (2*k) + 2 << endl;
}
int main(){
    boost;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}