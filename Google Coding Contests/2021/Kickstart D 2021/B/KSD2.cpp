#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>



void solve(){
    int n,c;
    cin>>n>>c;
    int t=n;
    int x[n];
    int i=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        x[i] =b-a;
    }
    
int count=0;
    int ans=0;
    while(c--){
        for(int j=0;j<n;j++){

            if(x[j]>0){
            ans+=t;
            x[j]--;
           // cout<<"ans ="<<ans;
        }
        }    
    }
    cout<<ans/n<<"\n"; 
    


}

int main(){
    boost;
    int t;
    int c=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<c++<<": ";
        solve();
    }
    return 0;
}
/* [1 3] [2 4] [1 4]

[1 2][2 3]
*/