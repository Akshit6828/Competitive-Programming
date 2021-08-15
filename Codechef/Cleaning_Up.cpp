#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>



void solve(){
    int n,m;
    cin>>n>>m;
    vi jobs(n);
    for(int i=0;i<n;i++)
    jobs[i] =i+1;

    while(m--){
        int ind;
        cin>>ind;
        jobs[ind-1] = -1;
    }
    vi chef;
    vi assistant;
    int turn =1;
    for(int i =0 ;i<n;i++){
        if(jobs[i]!=-1){
            if(turn&1)
            chef.push_back(i+1);
            else
            assistant.push_back(i+1);
            turn++;
        }
    }
    for(auto i:chef)
    cout<<i<<" ";
    cout<<endl;
    for(auto i:assistant)
    cout<<i<<" ";
    cout<<endl;


}

signed main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}