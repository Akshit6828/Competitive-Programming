#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    int arr[10];
    int teama=0,teamb=0;
    for(int i=0;i<10;i++){
    cin>>arr[i];
    if(i&1)
    teamb+=arr[i];
    else
    teama+=arr[i];
    }
    if(teama==teamb)
    cout<<"0\n";
    else
    teama>teamb?cout<<"1\n":cout<<"2\n";

}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}