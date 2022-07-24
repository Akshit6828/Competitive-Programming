#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

int solve(int a, vector<int> x, int n){
    for(int i = 0; i < n; i++){
        x[i] = abs(x[i] - a);
    }
    sort(x.begin(), x.end());
    return x[n-1] + x[n-2];

}

void solve_tc(){
    int n,a;
    cin>>n>>a;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin>>x[i];
    }

    cout<<solve(a,x,n);

          
}

int main(){
    boost;
    int c=0;
    int t;
    cin>>t;
    while(t--){
    solve_tc();
    }
    return 0;
}