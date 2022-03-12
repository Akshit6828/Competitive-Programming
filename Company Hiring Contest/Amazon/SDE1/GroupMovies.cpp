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
      for(int i = 0; i <n;i++)
        cin>>x[i];
    int limit;
    cin>>limit;
    sort(x.begin(), x.end(), greater<int>() );
    
    int groupcount = 0, curelem = x[0];
    for(int i = 1; i<n;i++){
        if((curelem - x[i]) >limit){
            groupcount++;
            curelem = x[i];
        }
    }
    cout<<(groupcount + 1);
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}