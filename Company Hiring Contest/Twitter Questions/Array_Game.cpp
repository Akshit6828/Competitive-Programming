#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int x=nums[0],k=0;
        while(k<nums.size() && nums[k]==x){
            k++;
        }
        for(int i=k;i<nums.size();i++){
            nums[i]+=ans;
            ans+=nums[i]-nums[i-1];
        }
        cout<<"ANS = "<<ans;
        return ans;
    }  

void solve(){
    int n;
    cin>>n;
    vi nums;
    for(int i =0;i<n;i++)
    cin>>nums[i];
    cout<<minMoves(nums);

}

int main(){
    
    solve();
    return 0;
}