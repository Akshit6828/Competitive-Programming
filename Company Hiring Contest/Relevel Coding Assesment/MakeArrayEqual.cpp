#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define deb(x) cout<<#x<<" = " <<x<<endl;
bool isPossibleToChange(vector<int> &x, long k, long mid){
    int cost = 0;
    for(int i = x.size() -1 ; i>=0 ; i--){
        if(x[i] >= mid){
            cost+=(x[i] - mid);
        }
    }

    return cost <=k ? true:false;
}

int FindCost(vector<int> &x, long k, long mid){
    int cost = 0;
    for(int i = x.size() -1 ; i>=0 ; i--){
        if(x[i] >= mid){
            cost+=(x[i] - mid);
        }
    }

    return cost;
}



bool isEqual(vector<int> &x){
    return x[0] == x[x.size() -1 ];
}

void IntializeValue(vector<int> &x, int e){
    for(auto &i: x){
        if(i >= e)
            i = e;
    }
}

void printVector(vector<int> x){
    for(auto i: x)
    cout<<i <<" ";
    cout<<endl;
}
int solve(vector<int> &x, long k){
    int cost = 0;
    
    while(true){
        sort(x.begin(), x.end());
        if(isEqual(x)){
            return x[0] == 0 ? cost: cost + 1;
        }else{
            long low = x[0]; // 1
            long high = x[x.size() - 1];//3
           
            while(low < high){
                long mid = (low + high) >> 1; // 2
                if(isPossibleToChange(x, k, mid)){//2
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            long elem = low;
            IntializeValue(x,elem);
           // printVector(x);
            cost += FindCost(x,k,elem);
            //deb(cost);
        }
    }
}

int main(){
   long n,k;
   cin>>n>>k;
   vector<int> x(n);
   for(int i = 0; i < n; i++){
       cin>>x[i];
   }

   cout<<solve(x,k);
    return 0;
}