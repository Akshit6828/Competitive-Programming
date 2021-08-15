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

// bbbb---> azaz
  //az-->by
  //aaa-->bz

void solve(){
    string s;  // 97-122
    cin>>s;
int len=s.length();                 
for(int i=0;i<len;i++){
    int val=s[i];
    if(i%2==0){
        if(val==97)
        s[i]='b';
        else
        s[i]='a';
    }
    else{
        if(val==122)
        s[i]='y';
        else
        s[i]='z';
    }

}
cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}