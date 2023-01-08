#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i = 0; i < n; i++)
        cin>>x[i];
    sort(x.begin(), x.end());
    
    for(int i = 0; i < n; i++){
        if(x[i] == x[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;

    
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}