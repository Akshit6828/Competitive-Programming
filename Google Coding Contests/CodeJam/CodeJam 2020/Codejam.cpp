#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl
#define vi vector<int>



int solve(){
      int n;
      cin>>n;
      vi a(n);
      for(int i=0;i<n;i++){
          int at;
          cin>>at;
          a.push_back(at);
      }   
      int cost=0;
     for(int i = 0; i < n; i++){
		int j = i;
		while(a[j] != i) 
        j++;
		cost=cost + (j-i+1);
		reverse(a.begin() + i, a.begin() + j + 1);
	}
	return (cost-1) ;
}

int main(){
    boost;
    int t;
    cin>>t;
   int c=1;
    while(t--){
        cout<<"Case #"<<c<<": "<<solve()<<endl;
    c++;
    }
    return 0;
}