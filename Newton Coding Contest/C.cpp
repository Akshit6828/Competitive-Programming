#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){

    int n,
    // Yet to code via adjancent list for graph
            
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

/*

Sample Input
6 5
2 4 3
2 3 4
2 1 2
2 5 6
1 5 2

Sample Output
0
2
10
8
2
-1

Explanation:
Shortest path from 1 to 3 is (1->2->3)  with total weight= 1*2+2*4=10
Shortest path from 1 to 5 is (1->5)  with total weight= 1*2=2
There doesn't exist any path from 1 to 6 so print -1


