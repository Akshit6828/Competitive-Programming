#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    long ans = 1; // As n <= 10^6
    long maxLen = 0;
    for(int i =1; i <n;i++){
        if(s[i] == s[i-1]) ans++;
        else{
            maxLen = max(ans, maxLen);
            ans = 1; // As we are starting a new sequence of len = 1. So answer should be 1.
        }
    }
    maxLen = max(ans,maxLen); // In case all the characters are same or the maximum sequence is at last.
    cout<<maxLen<<endl;
}
int main(){
    solve();
    return 0;
}