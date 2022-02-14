#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)



int tell_cost(int p, int q){
    int ans =0;
    int dis = q-p-1;
    if(dis&1){ // Odd Number: 5
    int val = dis/2;
    ans+= (val*(val+1)) + (val+1);
    return ans;
    }
    else{
        int val = dis/2;
        return val*(val+1);
    }
}
int tell_cost(int dis){
    return ((dis*(dis+1))/2);
}

void solve(){
          // cout<<ceil(5/2.0); = 3
          int n;
          cin>>n;
          string s;
          cin>>s;
          int p =-1,q=-1;
          int ans =0;
        for(int i=0;i<n;i++){
        if(s[i]=='1'){
            q= i;
            if(p ==-1)
            ans+=tell_cost(i);
            else
            ans+=tell_cost(p,q);
        p=i;
        }
        else{
        if(i==n-1&&s[i]!='1'){
        ans+=tell_cost(n-q-1);
        }
        }
        }
        cout<<ans<<endl;

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