#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define deb(x) cout<<#x<<" = "<<(x)<<"\n"

void solve(){
    ll n;
    int k;
    string s;
    cin>>n>>k;
    cin>>s;
    map<char,bool> mp;
    for(int i = 0;i< k ;i++){
        char x;
        cin>>x;
        mp[x]= true;
    }
    int p=0;
    ll ans=0,i=0;
    // for(i =0 ; i<n ; i++){
    //     if(!mp[s[i]]){
    //      int len = i - p;
    //      ans+= len*(len+1)/2;   
    //     p =i+1;
    //     }
    // }
   
    // // Loop ends and p = n+1 and i =n+1 if last element's is not there in map: so add 0 to ans
    // if(p<=i){
    //     ll len = i-p;
    //     ans+= len*(len+1)/2;
    // }
    // cout<<ans;


    
    // map<char,int>::iterator it;
    
    // for(it = mp.begin(); it!=mp.end();it++){
    //     cout<<" MAP FIrst" << it->first <<" MAP second "<< it->second <<"\n"; 
        
    // }
    //  TEST CASE MINE:
    // 9 3 
    // ABCLMABXY
    // A B C
    
    for(int q =0; q<n;q++){
        if(mp[s[q]])
        continue;
        else{
            //   deb(q);
            //   deb(p);
              int len = q - p;
            //   deb(q-p);
             ans+=(len*(len+1)/2);
             p = q+1;
        }
           
    }
    int x = n-p;
    ans+= ((x*(x+1))/2);
  
    cout<<ans;
            
}

int main(){
    boost;
    solve();
    return 0;
}