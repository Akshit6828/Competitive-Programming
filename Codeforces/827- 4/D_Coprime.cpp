#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>
// 4 3
// 4 2
int gcd(int a, int b){
    if(b==0)
        return a;

    if(a == 0)
        return b;
    
    return gcd(b, a%b);
}

void brute(){
    int n;
    cin>>n;
    vector<int> x(n);

    for(int i = 0; i < n; i++)
        cin>>x[i];

    int ans = -1;
    for(int i = 0; i < n; i++){
        for(int j  = i; j < n; j++){
            if(gcd(x[i],x[j]) == 1)
                ans = max(ans,(i + j + 2));
        }
    }

    cout<<ans<<"\n"; 
    
}
void solve(){
    int n;
    cin>>n;
    vector<int> x(n);

    for(int i = 0; i < n; i++)
        cin>>x[i];

    int ans = -1;
    for(int i = n-1; i >=0; i--){
        for(int j  = i; j >= 0; j--){
            if(gcd(x[i],x[j]) == 1){
                ans = max(ans,(i + j + 2));
                break;
            }
        }
    }

    cout<<ans<<endl;  
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}