#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/*
Edge case:
1) all increasing sequence. 1,2,3,4,5 ans = 0;
1) All decreasing seq: 5,4,3,2,1, ans = 4

Constraints
1≤n≤2⋅105
1≤xi≤109
*/
void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i = 0; i< n;i++)
        cin>>arr[i];
    
    long long increments = 0;
    for(int i = 1;i <n;i++){
        if(arr[i] < arr[i-1]){
            increments += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1]; // imp as it will not pick the previous made value and just increment arr[i-1] and arr[i];
            /* Eg: TC: 6 10 4 10 2 8 9 2 7 7 ans = 31 but else if we wont include this it will show 21.
            */
        }
    }
    cout<<increments;
}

int main(){
    solve();
    return 0;
}