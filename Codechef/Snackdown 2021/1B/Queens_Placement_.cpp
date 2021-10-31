#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

void solveMisha(){
        long long n;
        cin>>n;
        for(long long j = n; j >= 1; j--)
        {
            for(int k = 1; k <= n; k++)
            {
                if(j == k && k != 1 && k != 3)
                cout<<"Q";
                else
                cout<<".";
            }
            cout<<"\n";
        }
}

void solve(){
            
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solveMisha();
    return 0;
}