
#include <bits/stdc++.h>
// Long datatypes and overflows
#define int long long
#define INF (int) 1e9 +5
#define maxi INT_MAX
#define deb(x) cout<<#x<<" = "<<x<<"\n";

// vectors
#define vi vector<int>
#define vc vector<char>
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(c) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define pb push_back
#define ins insert
#define ft front()
#define bk back()
// Loops
#define FOR(i,a,b) for(int i =(a);i<(b);i+=c)
#define FOR(i,n) FOR(i,0,n-1)
#define ROF(i,a,b) for(int i =a;i>b;i-=c)
#define ROF(i,n) ROF(i,n-1,0)

using namespace std;

void solve(){
    int n;
    cin>>n;
    string x;
    cin>>x;
    vi dis(n,maxi);
    
    int counter = 0;
    
    // Calcu L(i);
    for(int i =0;i<n;i++){
        if(x[i]=='1'){
            counter =0;
            dis[i] =0;
        }
        else{
            counter++;
        dis[i] = min(counter,dis[i]);
            
        }
    }
    
    
    // Calcu R(i)
    counter = 0;
    for(int i =n-1;i>=0;i--){
        
        if(x[i]=='1'){
            counter =0;
            dis[i] = min(dis[i],counter);
        }
        else{
            counter++;
            dis[i] = min(counter, dis[i]);
        }
    }
    cout<<dis.size()<<" ";
    cout<<"Distance vector is\n";
    for(int i:dis)
    cout<<i<<" ";
    
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
