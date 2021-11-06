#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void solveSubstr(){
    string s1,s2;
    cin>>s1>>s2;
    int ans =0;
    char y = s2[0];
    int len = s2.length();
    for(int i =0;i<s1.length();i++){
        if(s1[i]==y){
            if(s1.substr(i,len)==s2){
            ans++;
            }
        }    

    }

    cout<<ans<<endl;
}
    int main(){
    solveSubstr();
    return 0;
}