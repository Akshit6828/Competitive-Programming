#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>

void solve2(){
    map<int, int> M;
    for(int i =0;i<4;i++){
        int a;
        cin>>a;
        if (M.find(a) == M.end())
        M[a] =1;
        else
        M[a]++; 
    }
    int ans=0;
    for (auto& it : M) {
            if(it.second <=2)
            ans+=it.second;
    }
    if(ans==4||ans==3)
    cout<<"2" <<"\n";
    else if(ans == 1)
    cout<<"1" <<"\n";
    else
    cout<<"0" <<"\n"; 
    

}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve2();
    return 0;
}