#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


// file handling
#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)

/*
1≤T≤90
1 \leq N, K, S_i \leq 1001≤N,K,S 
i
​
 ≤100
*/

bool solve(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    
    if(n > 2*k)
        return false;
    
    map<int,int> mp;
    for(auto i: arr){
        mp[i]++;

        if(mp[i]>2)
            return false;
    }

    return true;
}
int main(){
    boost;
    in("Pass_A.txt");
    out("Pass_Out_A.txt");
    int t;
    cin>>t;
    int c = 0;
    while(t--){
    bool ans = solve();
    cout<<"Case #"<<++c<<":";
    ans == true?cout<<"YES\n": cout<<"NO\n";
    
    }

    return 0;
}