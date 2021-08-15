#include<bits/stdc++.h>
using namespace std;

//---
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define ll long long
#define ld long double
/*
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)*/




//-----------------
template<class T> void read(T& x) {
	cin >> x;
}

void solve(){
    int n,k;
    cin>>n>>k;
    string ans="";
    for(int i=1;i<=k;i++){
        ans+="a";
    }
    for(int i=1;i<=n-k;i++){
        if(i%2==0)
        ans+="c";
        else if(i%2==1&&i%3==0)
        ans+="a";
        else
        {
            ans+="b";
        }
        
    }
    cout<<ans<<endl;
    
}

int main(){
    boost;
    int t;
    read(t);
    while(t--)
    solve();
}