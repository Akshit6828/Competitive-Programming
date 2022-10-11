#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

void solve(){
    long n;
    cin>>n;

    if(n == 3 || n == 1){
        cout<<"-1"<<endl;
        return;
    }

    if(n == 2){
        cout<<"2 1"<<endl;
        return;
    }
    vector<long> x;
    for(long i = 0; i <n; i++){
        x.push_back(n-i);
    }
    // 7 6 5 4 3 2 1
    // 7 6 5 1 2 3 4

    //6 5 4 3 2 1
    //6 5 4 1 2 3
    
    //5 4 3 2 1
    //5 4 2 3 1
    reverse(x.begin() + n/2, x.end());

    for(auto i: x)
        cout<<i<<" ";
    cout<<endl;
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}


 // Rough
 /*
     1 2 3 4 5 n= odd, <(n/2) 
     1 2 3 4 5 6 n = even, <=
     7 /2 = 3
     2/2 = 1
     1 2 3 4 
     2 1 4 3
     1 2 3 4 5 6 7 n = odd ( swap till )
     2 1 4 3 6 5 7
     1 2 3 4 5 6, n = even (nothing to do)
     2 1 4 3 6 5


   
    vector<int> x;
    for(int i = 0; i < n; i++)
        x.push_back(i+1);
    
    for(int i  = 1; i < n; i+=2){
        swap(x[i], x[i-1]);
    }
    if(n&1){
        1 2 3 4 5
         2 1 4 3 5
         2 1 3 4 5
        swap(x[n-2], x[n-3]);
        reverse(x.end(), x.end() + 3);
    }

*/