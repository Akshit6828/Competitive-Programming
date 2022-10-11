#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

/*
XXXS < XS
XXXL > XL
XL > M
XXL = XXL
XXXXXS < M
XL > XXXS

*/
// L M S
map<char, int> mp = {
  {'S',1},
  {'M',2},
  {'L',3}
};

int countX(string s){
    int count = 0;
    for(char c: s)
        count+=(c == 'X');
    
    return count;
}
string solve(){
    string s1, s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    
    if(mp[s1[n-1]] >  mp[s2[m-1]]){
        return ">";
    }else if (mp[s1[n-1]] <  mp[s2[m-1]]){
        return "<";
    }
    else{ // Cases: XXXL and XXL || M and M || XXS and XS
        if(s1[n-1] == 'S'){ // Counting X will make small for S.
            if(countX(s1) < countX(s2)){ // XS and XXS
                return ">";
            } else if(countX(s1) > countX(s2)){ // XXS and XS
                return "<";
            }else{
                return "=";
            }
        }
        else{
            if(countX(s1) < countX(s2)){ 
                return "<";
            } else if(countX(s1) > countX(s2)){
                return ">";
            }else{
                return "=";
            }
        }
    }

}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;
    return 0;
}