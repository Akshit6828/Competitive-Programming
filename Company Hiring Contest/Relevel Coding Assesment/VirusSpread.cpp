#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void CalculateVirusPower(vector<int> &x){
    long power = 0;
    long sum = accumulate(x.begin(), x.end(), 0.0);
	//long sum = 0;
    //for(auto i: x)
    //    sum+=i;

    for(int i = 0; i < x.size() ; i++){
        long current_power = x[i];
		long neighbours_power_sum = sum - current_power;
        power += (current_power * neighbours_power_sum);
    }
    cout<<power;

}
int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i = 0;i < n; i++)
        cin>>x[i];
    
    CalculateVirusPower(x);
    return 0;
}