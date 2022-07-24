#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

long long divideArray(int N, vector<int> &fighters, vector<long long> &prefix, vector<long long> suffix){
        priority_queue<int, vector<int>, greater<int>> min_heap;
        priority_queue<int> max_heap;

        long long sum = 0;

        for(int i = 0; i < 2*N; i++){
            long long cur = fighters[i];
            sum += cur;
            min_heap.push(cur);
            if(i < N-1) 
                continue;
            if(i == N-1) 
                prefix[i] = sum;
            else if(i >= N){
                sum = sum - min_heap.top();
                min_heap.pop();
                prefix[i] = sum;
            }
        }
        sum = 0;
        for(int i = 3*N-1;i >= N; i--){
            long long cur = fighters[i];
            sum += cur;
            max_heap.push(cur);
            if(i > 2*N) 
                continue;
            if(i == 2*N) 
                suffix[i] = sum;
            else if(i <= 2*N-1){
                sum = sum - max_heap.top();
                max_heap.pop();
                suffix[i] = sum;
            }
        }
}

long long solve(int N, vector<int> fighters){
       vector<long long> prefix(3*N), suffix(3*N);
       divideArray(N, fighters, prefix, suffix);
       long long ans = INT_MIN;
       for(int i = N-1;i <2*N; i++)
          ans = max(ans, prefix[i]-suffix[i+1]);
       return ans;     
}

void input(){
    long long n;
    cin>>n;
    vector<int> x(3*n);

    for(int  i = 0; i<3*n ; i++)
        cin>>x[i];

    cout<<solve(n,x)<<endl;
}
int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    input();
    return 0;
}