#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

/*
Corner Cases:

*/

void solve(){
   string s1, s2;
   cin>>s1>>s2;
   
   bool impossible = false;
   int index = 0;

   for(char c: s1){
       index = s2.find(c, index);
       if(index!= string::npos)
            index++;
        else{
            impossible = true;
            break;
        }
   }
   if(impossible)
        cout<<"IMPOSSIBLE"<<endl;
    else
    cout<<s2.size() - s1.size()<<endl;

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