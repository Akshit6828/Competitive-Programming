#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    long n;
    cin>>n;

    if(n> 1 && n<4){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    
    // Good to start with even first as the ending of even and starting of odd would be maxium in this case(helpful for n = 4).
    // So it will be helpful in case of n = 4 which will produce 2 4 1 3.
    int even = 2;
    while(even <= n){
        cout<<even<<" ";
        even+=2;
    }
    int odd = 1;
    while(odd <=n){
        cout<<odd<<" ";
        odd+=2;
    }
}

int main(){
    solve();
    return 0;
}