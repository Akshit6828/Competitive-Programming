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
      for(int i = 0; i<n;i++)
        cin>>x[i];

    vector<int> pref(n);
    vector<int> suf(n);
    int sum = 0;
    for(int i = 0; i<n;i++){
        sum+=x[i];
        pref[i] = sum;
    }
    sum = 0;
    for(int  i = n-1; i>=0; i--){
        sum+=x[i];
        suf[i] = sum;
    }
    int ans = 0;
    vector<int>  res(n);
    for(int i = 0; i<n;i++){
        res[i] = max(pref[i],suf[i]);
    }
    cout<< *max_element(res.begin(), res.end());
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}