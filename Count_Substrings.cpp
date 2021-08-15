#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>



void solve(){
        int n;
        cin>>n;
        int count=0;
        for(int i =0;i<n;i++){
            int t;
            cin>>t;
            if(t==1)
            count++;
        }
        // Based on the fact that number of substrings in a string of len 'n' is n(n+1)/2;
        cout<<(count*(count+1))/2 <<"\n"; 
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}