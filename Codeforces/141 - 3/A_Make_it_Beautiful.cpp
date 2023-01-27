#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

void printArray(vector<int> x){
    for(auto a: x) cout<<a<<" ";
    cout<<endl;
}

void Rearrange(vector<int> &x){

    vector<int> temp;
    int left = 0, right = x.size()-1;
   
    while(left <= right){
        temp.push_back(x[left]);
        if(left != right)
            temp.push_back(x[right]);

        left++;
        right--;
    }
    
    x = temp;
}

void solve(){
    int n;
    cin>>n;
    vi x(n);
    for(int i = 0; i<n; i++){
        cin>>x[i];
    }

    int sum = x[0];
    bool ok = true, equal = true;
    int first = sum; 

    for(int i = 1; i < n; i++){
        
        if(first != x[i]) equal = false;

        if(x[i] == sum) ok = false;

        sum+=x[i];
    }

    if(equal == true){ // All Elements are equall
        cout<<"NO"<<endl;
    }
    else if(ok == false){ // Elements are not equal but not beautiful
        cout<<"YES"<<endl;
        sort(x.begin(), x.end(), greater<int>());
        Rearrange(x);
        printArray(x);
    }
    else{
        cout<<"YES"<<endl;
        printArray(x);
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