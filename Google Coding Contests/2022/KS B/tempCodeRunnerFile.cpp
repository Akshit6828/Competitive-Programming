#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>
#define pi 3.1415926535897932384626433832795


void solve(){
    int r, a, b;
    cin>>r>>a>>b;
    double area = 0.0;
    area+= (r*r*pi);
  
    int i = 0;
 
    while(r>0){
        if(i%2 == 0)
            r=r*a;
        else
            r= r/b;
        
        area += (r*r*pi);
        i++;
       
    }
    cout << fixed << setprecision(6) << area<<endl;
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solve();
    }
    return 0;
}