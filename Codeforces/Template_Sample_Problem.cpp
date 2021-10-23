

#include<bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "becomes = " << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define Fo(a,n,b) for(ll i=a;i<n;i+=c)
using namespace std;


template<class T> void read(T& x) {
	cin >> x;
}
void solve(){
    ll n;
    read(n);
    int x[n];
    Fo(0,n,1)
    cin>>x[i];

    for(0,n-1,1){
           
            if(max(x[i],x[i+1])/min(x[i],x[i+1])<=2)
                continue;
            else{

                 int count=0;
                if(x[i]<x[i+1]){
                    int dis=(x[i+1]-2)-x[i];
                    int ini=x[i];
                    while (ini<dis)
                    {
                        count++;
                    }
                    
                }
                else{
                    int dis=(x[i]-2)-x[i+1];
                    int ini=x[i];
                    while (ini>dis)
                    {
                        count++;
                    }
                }

            }
        }
        cout<<count<<endl;
        
    }
    

int main()
{
    boost;
    long long int t;
    read(t);
    while(t--)
    solve();
}