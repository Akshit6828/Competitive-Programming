#include<bits/stdc++.h>
#include <algorithm>
#define Fo(i,a,n) for(int i= a;i<n;i++)
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define ld long double
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
using namespace std;

void solve(){
int n,q;
cin>>n>>q;

int x[n];
Fo(i,0,n)
cin>>x[i];

while(q--){
    int t;
    cin>>t;
    if(t==1){
        int xn;
        cin>>xn;
        cout<<1-x[xn];
        q--;
    }
    else{
        int k;
        cin>>k;
     int  a[n];
copy(x.begin(), x.end(),a.begin(a));
sort(a,a+n,greater<int>());
cout<<a[k];
q--;
    }

}

}


int main()
{
    boost;
   solve();
    return 0;
}