#include<bits/stdc++.h>
#include<string>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


int firstLargestIndex(string n, int val){
    int ind = -1;
    for(int i = 0; i<n.length();i++){
        if(n[i] - '0' > val){
            ind = i;
            break; 
        }
    }
    return ind;
}
void solve(){

    string n;
    cin>>n;
    long int sum = 0;
    for(char c: n){
        sum+= c - '0';
    }

    string ans="";
    if(sum%9 == 0){
        ans+=n[0];
        ans+="0";
        ans+=n.substr(1);
        cout<<ans<<endl;
        return;
    }
   
    sum = 9 - sum%9;
    int ind = firstLargestIndex(n, sum);

    
    if(ind>0){
        ans+=n.substr(0,ind);
        ans+=to_string(sum);
        ans+=n.substr(ind);
    }
    else if(ind == 0){
        ans+=to_string(sum);
        ans+=n;
    }
    else{
        ans+=n;
        ans+=to_string(sum);
        
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