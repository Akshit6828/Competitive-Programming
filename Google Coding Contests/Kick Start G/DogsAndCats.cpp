#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>
#define int long long



void solve(){
      int n,d,c,m;
      cin>>n>>d>>c>>m;
      string line;
      cin>>line;
      int lst_dog =-1;
      for(int i = line.length()-1 ;i>=0;i--){
          if(line[i]=='D'){
              lst_dog = i;
              break;
          }
      }
      if(lst_dog==-1){
          cout<<"YES\n";
          return;
      }
      int i =0;
        for(i=0;i<=lst_dog;i++){
            
            if(line[i] =='D'){
                if(d>0){
                d--;
                c+=m;
            }
            else break;
            
            }

            if(line[i] =='C'){
                if(c>0) c--;
                else break;
            }
            
      }

      if(i!=lst_dog+1){
          cout<<"NO\n";
      }
      else{
          cout<<"YES\n";
      } 
}

signed main(){
    boost;
    int c=0;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<++c<<": ";
    solve();
    }
    return 0;
}