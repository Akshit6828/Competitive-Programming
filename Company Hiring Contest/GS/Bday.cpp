#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

bool isValid(string s1, string s2){
    if (s1.length() != s2.length())
        return false;
 
   string temp = s1 + s2;
  return (temp.find(s1) != string::npos);

}
void solve(){
    string a, b;
    cin>>a>>b;
    if(isValid(a,b)){
        string temp = b;
        int ans = 0;
        while(b!=a){
            rightrotate(a,1);
            ans++;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<"foul";
    }    
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}