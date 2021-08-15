#include<bits/stdc++.h>
using namespace std;

//---
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define ll long long
#define ld long double


void solve(){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int count=0;        
    int ans=0;
    sort(x,x+n);
                             //1 1 2 2 3-->2   //1 1 1 2 3 4-->3  //1 3 4 4 5 5 5 -->4
    for(int i=0;i<n;i++){ // 1 1 1 2 3 3 
    if(x[i]==x[i+1])
    count++;
        ans=max(count,ans);
    }
    cout<<ans+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}