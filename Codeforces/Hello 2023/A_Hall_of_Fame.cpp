#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)


/*
Notice that lamps cannot change direction, it is only allowed to swap adjacent ones.
*/

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string ac1 = "RL";
    string ac2 = "LR";
  
    size_t ans1 = s.find(ac1);
    size_t ans2 = s.find(ac2);
    
    if (ans1 != string::npos){
        cout<<"0"<<endl;
    }
    else if(ans2 != string::npos){
        cout<<ans2 + 1<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}