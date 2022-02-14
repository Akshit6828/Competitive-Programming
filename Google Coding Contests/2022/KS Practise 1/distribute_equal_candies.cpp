#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
     int bag_count, children_count;
     cin>>bag_count>>children_count;
     int total_candies = 0;
     for(int bag  = 1; bag<=bag_count;bag++){
         int current_bag_count;
         cin>>current_bag_count;
         total_candies+=current_bag_count;
     }
     cout<< total_candies - (children_count * (total_candies/children_count))<<endl;
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solve();
    }
    return 0;
}