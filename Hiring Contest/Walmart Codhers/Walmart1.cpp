#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>

int* return_ind(int* z, int* x,int n, int ans[]){
    vi indexes;
    int left=n;
    for(int i=0;i<n;i++){
        if(z[i]==0){
            left--;
            indexes.push_back(i);
        }
    }
    if(left==0){
        ans[0]=-1;
        ans[1]=-1;
    }
    else{
    for(int i=0;i<n;i++){
        int val1= indexes[i];
        int val2=indexes[i+1];
        int sum=0;
        int maxx=-1;
        for(int i=val1;i<=val2;i++){
            sum+=x[i];
        }
        if(maxx<max(sum,maxx)){
            maxx = max(sum,maxx);
            ans[0]= val1;
            ans[1]=val2;
        }
    }
    }
    return ans;

}

void solve(){
   // cout<<"Solve called";
    int n;
    cin>>n;
    int x[n];
    int zeros[n];
    fill_n(zeros, n, -1);
    
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==0)
        zeros[i]=0;
    }

    int steps=0;
    int flag=0;
    int ans[2];
    while(flag==0){
       int* xy;
       xy =  return_ind(zeros,x,n,ans);
      // cout<<"STEP "<<steps<<"xy[0] = "<<xy[0]<<" XY[1] = "<<xy[1] <<endl;
       
       if(xy[0]==-1&&xy[1]==-1){
           flag=1;
           break;
       }
       else
       steps++;

    }
    cout<<steps <<endl;
    
}

int main(){
    //boost;
   // cout<<"Main";
    solve();
    return 0;
}