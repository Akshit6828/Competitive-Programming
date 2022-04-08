#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


int findEarliestMonth(vector<int> stockPrices){
    int months = stockPrices.size();

    vector<int> prefixSum(months);
    prefixSum[0] = stockPrices[0];
    
    for(int i = 1; i<months; i++){
        prefixSum[i] = prefixSum[i-1] + stockPrices[i];
    }
    cout<<" Pref sum: \n";
     for(auto i: prefixSum){
        cout<<i <<" ";
    }
    cout<<endl;
    vector<int> suffixSum(months);
    suffixSum[months - 1] = stockPrices[months-1];

    for(int i = months -2; i>=0; i--){
        suffixSum[i] = suffixSum[i+1] + stockPrices[i];
    }

    cout<<" Suffi sum: \n";
     for(auto i: suffixSum){
        cout<<i <<" ";
    }
    cout<<endl;

    vector<int> avg(months);
    // 1 3 2 3

    avg[0] = abs((prefixSum[0])  - ( suffixSum[1]/months - 1));
    avg[months - 1] = abs((prefixSum[months - 1] / months)  - ( suffixSum[months - 1]));

    for(int  i = 1; i< months - 1; i++){
        avg[i] = abs( (prefixSum[i]/ (i+1) )  - (suffixSum[i+1]/months - (i+1)));
    }

    cout<<"AVG' are:\n";
    for(auto i: avg){
        cout<<i <<" ";
    }
    cout<<endl;
    int minAvg = *min_element(avg.begin(), avg.end());
    int bestMonth = -1;
    for(int i = 0; i<avg.size(); i++){
        if(avg[i] == minAvg){
            bestMonth = i+1;
            break;
        }
    }
    return bestMonth;

}

void solve(){
      int n;
      cin>>n;
      vector<int> stockPrices(n);
      for(int i = 0; i<n;i++)
        cin>>stockPrices[i];
    cout<<findEarliestMonth(stockPrices);      
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}