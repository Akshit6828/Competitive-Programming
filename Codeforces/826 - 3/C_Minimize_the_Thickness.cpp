#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


/*
Question  = minimum segment thickness having sum = equal
minimum segment len can be 1 when 1 element no equall sum can be found
55 45   30 30  40  100
55 100 130 160 200 300


10 55 35 30 65
10 65 100 130 195

10 65 35 65 65


10 23 7 13
10 33 40 53

4 1 1 1 1 4
4   5  6  7  8  12
12  8  7  6  5  4
*/


void solve(){
    int n;
    cin>>n;

    vector<int> x(n);
    for(int i = 0; i < n; i++) 
        cin>>x[i];

    vector<int> pref(n);
    pref[0] = x[0];        
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}