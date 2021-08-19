#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


void solve(){
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    vector<pair<int,int>> v;
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i =0;i<n;i++)
    cin>>b[i];

    for(int i =0;i<n;i++){
    v.push_back(make_pair(a[i],b[i]));
    }


    vector<vector<int>> ans;
    int cur_time=0;
    sort(v.begin(),v.end());
    int in_time = 0;
    int out_time = 0;
    int count =0;
    int index =-1;
    for(int i =0;i<n;i++){

        if(v[i].second>cur_time&& v[i].first<=v[i].second && v[i].first + cur_time<=v[i].second){

            // Finding index of the element
            auto it1 = find(a.begin(), a.end(), v[i].first);
            auto it2 = find(b.begin(), b.end(), v[i].second);

            // If element was found
            if (it1 != a.end() && it2 != b.end())
            {
            // calculating the index
            // of K
             index = it1 - a.begin(); 
             
            }


            vector<int> values;
            values.push_back(index+1);

            out_time = out_time+  v[i].first;
            
            values.push_back(in_time);


            values.push_back(out_time);

            in_time = out_time;
            count++;
            ans.push_back(values);
            cur_time+= v[i].first;
        }
        
    }

    cout<<count <<"\n"; 
    for(int i =0;i<ans.size();i++){
        cout<<ans[i][0] <<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
    }

            



}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}