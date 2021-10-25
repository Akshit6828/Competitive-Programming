#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    int n,k;
    cin>>n>>k;
    vi a(n); 
    for(int i=0;i<n;i++)
    cin>>a[i];

    int count =0;
    map<int ,int> m;
    for(int i=0;i<n;i++)
    m[a[i]]++;

    int left=0;
    for(auto it:m){

        if(it.second>=k){
            count++;
            it.second =0;
        }
        else
        left+=it.second;
    }

    count+= ceil((double)left/(double)k);
    cout<<count<<endl;


}

int main(){

    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}