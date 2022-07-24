#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

long long solve(int n, vector<int> &x){

    vector<int> maxA;
    vector<int> minA;

    int mid = (3*n)/2;
    for(int i =  0; i <=mid ; i++){
        maxA.push_back(x[i]);
    }
    
    for(int i = mid + 1; i < 3*n ; i++)
        minA.push_back(x[i]);

    sort(maxA.begin(), maxA.end(), greater<int>());
    sort(minA.begin(), minA.end());

    int i = 0, j = 0;
    int count = 0;
    long long sum1 = 0;
    long long sum2 = 0;
    long long sum = 0;
    while(count < n*2){
        if(sum + maxA[i] >= sum - minA[j]){
            sum+=maxA[i];
            cout<<"maxA[i] = "<<maxA[i]<<" taken"<<endl;
            deb(sum);
            i++;
            deb(i);
           
        }
        else if(sum + minA[j] > sum + maxA[i]){
            sum-=minA[j];
            cout<<"minA[j] = "<<minA[j]<<" taken"<<endl;
            j++;
        }
        count++;
    }

    return sum;
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