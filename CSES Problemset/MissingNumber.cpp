#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<bool> nums(n);
    for(int i = 0; i<n-1;i++){
        int ind;
        cin>>ind;
        nums[ind-1] = true;
    }

    for(int i = 0;i < n;i++){
        if(nums[i] == false){
            cout<<(i+1);
            break;
        }
    }

}

int main(){
    solve();
    return 0;
}