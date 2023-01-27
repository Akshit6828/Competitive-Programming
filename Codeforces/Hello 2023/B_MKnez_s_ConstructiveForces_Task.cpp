#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


// 1 -1 1
void solve(){
    int n;
    cin>>n;
    if(n%2 ==1 && n > 1){// if num is odd 
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        for(int i = 1; i <=n; i++){
            if(i&1)
                cout<<"-1 ";
            else
                cout<<"1 ";
        }
        cout<<endl;
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