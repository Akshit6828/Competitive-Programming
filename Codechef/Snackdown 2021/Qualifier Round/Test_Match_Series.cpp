#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
      int n;
      int india =0, eng =0;
      vi results(5);
      for(int i =0;i<5;i++){
          int v;
          cin>>v;
          results[i] =v;
          if(v==1) india++;
          if(v==2) eng++;
          if(v==0){ india++; eng++;}
      }

      if(india>eng) cout<<"INDIA\n";
      else if(eng>india) cout<<"ENGLAND\n";
      else cout<<"DRAW\n";
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}