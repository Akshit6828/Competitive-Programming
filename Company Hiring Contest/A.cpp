#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

int nextIndex(vector<int> &x, int j){
    for(int i = j+1; i< x.size(); i++){
        if(x[i]<0)
        return i;
    }
    return x.size();
}

void solve(){
      int n;
      cin>>n;
      vi x(n+1);
      for(int i =0;i<n;i++){
          int l;
          cin>>l;
         x[l]++;
      }
    for(int i = 0;i <=n;i++){
        x[i]--;
    }

    int ans = 0;
    for(int i =1 ; i<=n; i++){
        while(x[i]>0){
            int pos = nextIndex(x, i);
            x[pos]++;
            ans+= abs(pos - i);
            x[i]--;
        }
    }
    cout<<ans<<endl;

      
}
