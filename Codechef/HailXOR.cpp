#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define Fo(i,a,n) for(ll i=a;i<n;i++)
using namespace std;
inline ll highestOneLeftBit(ll i) {
    cout<<"Function called\n";
    deb(i);
    i |= (i >>  1);
    deb(i);
    i |= (i >>  2);
    deb(i);
    i |= (i >>  4);
    deb(i);
    i |= (i >>  8);
    deb(i);
    i |= (i >> 16);
    deb(i);
    i=(i - (i >> 1));
    cout<<" aaaa\n";
    i=i>>1;
    
    deb(i);
    return i;
}

void solve(){
    ll n,x;
    cin>>n>>x;
    ll v[n];
    Fo(i,0,n)
        cin>>v[i];
        
    ll operations=0;
    int flag=0;
    Fo(i,0,n){
     ll val1=log2(highestOneLeftBit(v[i]));
        Fo(j,i+1,n){
            if(log2(highestOneLeftBit(v[j]))== val1 && v[j]>=v[i])
            {
                v[i]=v[i]^(ll)pow(2,val1);
                v[j]=v[j]^(ll)pow(2,val1);
                operations++;
                if(operations==x)
                {flag=1;
                 break;}
                 
            }
            if(flag==1)
            break;
            
        }
    }
    
    Fo(i,0,n)
    cout<<v[i]<<" ";
}
int main()
{
   /*ll t;
    cin>>t;
    while(t--)
    solve(); */

    int ans=highestOneLeftBit(5);
cout<<ans<<endl;
  
}