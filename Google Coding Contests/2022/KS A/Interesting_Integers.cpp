#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

int sum(int n){
    int ans = 0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int prod(int n){
    int ans = 1;
    while(n>0){
        ans*=n%10;
        n/=10;
    }
    return ans;
}
bool isGood(int i, vector<int> &dp, int ind){
    if(prod(i) % dp[ind] == 0)
        return true;
    else
    return false;

}

bool isGood(int i){
    if(prod(i) % dp[ind] == 0)
        return true;
    else
    return false;

}
void solveBruteForce(){
    long int a,b;
    cin>>a>>b;
    long int count = 0;
    /*
    for(int i = 1; i<dp.size(); i++){
        if(i%10 == 0){
            int ans = 0;
            string t  = to_string(i);
            for(char c:t){
                if(c - '0' > 0)
                    ans = ans*10 + (c - '0');
            }
            dp.push_back(ans);
        }
        else{
            int val = dp[i-1];
            dp.push_back(val+1);
        }
    }
    int cnt = 0;
    */
    for(int i = a; i<=b;i++){
        if(isGood(i))
            count++;
    }
    cout<<count<<endl;
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solveBruteForce();
    }
    return 0;
}