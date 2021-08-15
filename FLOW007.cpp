#include<bits/stdc++.h>
#define Fo(i,a,n) for(int i= a;i<n;i++)
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define ld long double
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
using namespace std;

void solve(){
    string s;
    cin>>s;
    int len=s.length();
    int ii=0;
    for(int i=0;i<len-1;i++){
        char a=s[i];
        char b=s[i+1];

        if(a==b&&a=='0')
        ii++;
        else
            break;
        
}
for(int i=len-1;i>=ii;i--)
cout<<s[i];//456
cout<<endl;
}


int main()
{
    boost;
   int t;
   cin>>t;
   while(t--)
   solve();
    

    return 0;
}