#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>

void solve_Approach2(){
    int n;
    cin>>n;
    vi arr(n);
    vi ans(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    stack<int> s;
    s.push(arr[n-1]);
    ans[n-1] = -1;

   for(int i =n-2;i>=0;i--){
   
   // Popping the smaller elements in stack until we see large stack.
   // 5 5 5 5 5 : s<5>
   // 5 5 5 5 -1 : s<5>
   while(!s.empty()&&arr[i]>=s.top())
   s.pop();
   
   if(s.empty()){
       ans[i] =-1;
   }
   else{
       ans[i] = s.top();
   }

   s.push(arr[i]);
   }
   
   for(int i=0;i<n;i++)
    cout<<ans[i]<< " ";


}
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    stack<int> s;
     vi ans(n);
    ans[n-1] = -1;
    s.push(arr[n-1]);

    for(int i =n-2;i>=0;i--){

        // Checking if next greater element is top of stack
        if(arr[i]<=s.top()){
            ans[i] = s.top();
            if(arr[i]==s.top())
                continue;
            s.push(arr[i]);
        
        }
        
        else if(arr[i]>s.top()){

            if(s.empty()){
            s.push(arr[i]);
            ans[i] = arr[i];
            continue;
            }
            
            int flag=0;
            int top = s.top();
            while(top<arr[i]){
                s.pop();
                top=s.top();
                if(s.empty()){
                     s.push(arr[i]);
                    flag=1;
                    break;
                }
            }
            
            if(flag==1){
                ans[i] = s.top();
                continue;
            }
            s.push(arr[i]);
            }
            
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<< " ";
   
    }

int main(){

    boost;
   // solve();
    solve_Approach2();
    return 0;
}