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

void solve(){
    string ans ="NESW";
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.length();
    int j=0;
    int pos=2;
    while(j<=len){
        if(s[j]=='0')
        pos++;
        else if(s[j]=='1')
        pos--;
        j++;
    }
    if(pos%1==0&&pos%2!=0&&pos%3!=0&&pos%4!=0)
    cout<<"N"<<endl;
    else if(pos%1!=0&&pos%2==0&&pos%3!=0&&pos%4!=0)
    cout<<"E"<<endl;
    else if(pos%1!=0&&pos%2!=0&&pos%3==0&&pos%4!=0)
    cout<<"W"<<endl;
    else if(pos%1!=0&&pos%2!=0&&pos%3!=0&&pos%4==0)
    cout<<"S"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}