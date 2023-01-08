#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


long long maximumMultiple(int n, int x[]) {
        // code here
        vector<int> pos, neg;
        for(int i = 0; i < n; i++){
            if(x<0)
                neg.push_back(x[i]);
            else
                pos.push_back(x[i]);
        }

        if(pos.size() == 0){
            return neg[n/2] * neg[(n/2) + 1];
        }
        else if(neg.size() == 0){
            return pos[n/2] * pos[(n/2) + 1];
        }
        else{
            int left , right, mid;
            int n = neg.size();
            int m = pos.size();
           
        }
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n ;i++)
    cin>>arr[i];

    cout<<maximumMultiple(n,arr);
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}