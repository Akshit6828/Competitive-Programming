#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

// Corner Cases -ve numbers of position.
// 2 steps+ or 1 step back.
void solve(){
      int chef_pos, queen_pos;
      cin>>chef_pos>>queen_pos;
      int ans =0, dis =0;
      dis = chef_pos<queen_pos?(queen_pos-chef_pos):(chef_pos-queen_pos);
      if(chef_pos<queen_pos){
      if(dis%2==0){
          ans = dis/2;
      }
      else{
          ans = ceil(dis/2.0)+1;
      }
      }
      else{
          ans = abs(queen_pos - chef_pos);
      }
      cout<<ans<<endl;


}

int main(){
   
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}