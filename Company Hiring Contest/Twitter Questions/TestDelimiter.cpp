#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    int main(){
   vector<string> x ={"30 99 sign-in", "30 105 sign-out","12 100 sign-in","20 80 sign-in","12 120 sign-out","20 101 sign-out","21 110 sign-in"};
    int n = x.size();
	int id, time;
	string type;
    for(int i =0;i<n;i++){
        stringstream ss(x[i]);
        ss>>id>>time>>type;
        cout<< "Id = "<<id <<" Time = "<<time<< " Type = "<<type<<endl;
    }

	
    return 0;
}