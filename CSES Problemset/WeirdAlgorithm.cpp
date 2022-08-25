#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Make n as long as 1<= N < 10^6 and NOT 10^5.
void solve(){
    long n;
    cin>>n;
    while(n >=1){
        cout<<n<<" ";
        if(n == 1) break;
        if(n&1){
            n*=3;
            n+=1;
        }
        else n/=2;
    }
}

int main(){
    solve();
    return 0;
}