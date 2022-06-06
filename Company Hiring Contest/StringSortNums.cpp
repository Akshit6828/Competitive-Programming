#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    map<int , string> mp;
    string s;
    cin>>s;
    string type;
    int id;
    char ch;
    string temp;
    for(int i = 0; i<s.length(); i++){

        if(s[i]!=' ')
        temp+=s[i];
        else{
        stringstream ss(temp);
        ss>>id>>ch>>type;
        cout<< "Id = "<<id <<" ch = "<<time<< " Type = "<<type<<endl;
        temp ="";
        }
        cout<<"Temp = "<<temp<<endl;
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