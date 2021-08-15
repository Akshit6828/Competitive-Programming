#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define vpi vector<pair<int,int>>



void solve(){
    ll n, m,remaining_count;
    cin>>n>>m;
    remaining_count = n;
    vpi values_pair;
    for(int i=0;i<m;i++){  
        ll Value, Position;
        cin>>Value>>Position;
        values_pair.push_back({Value,Position});
    }
    sort(values_pair.begin(), values_pair.end(), greater<pair<int,int>>());
        
    ll current_mod_pos = 1;
    ll count=0;
    for(int i =0;i<m;i++){

        if(remaining_count>0){
            current_mod_pos = current_mod_pos*values_pair[i].second/__gcd(current_mod_pos,(ll)values_pair[i].second);
            ll val =  (remaining_count - n/current_mod_pos);
            count+=val*values_pair[i].first;
            remaining_count = n/current_mod_pos;

        }
    }
    printf("%ld\n",count);
            
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}