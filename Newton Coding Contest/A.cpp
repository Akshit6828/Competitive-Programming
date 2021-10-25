#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void solve(){
    unsigned long long int x,y,z;
      cin>>x>>y>>z;
      cout<<max(z-x,z-y)<<"\n";
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



Hawkeye has been assigned to eliminate n monsters, the ith of which is of type ai. 
In one move, he can do either of the following:

i. Shoot down atmost any k monsters. In other words, he can shoot down any set of monsters such that the size of that set is smaller than or equal to k.
ii. Shoot down all monsters of any one type.
Sample input
3
7 2
1 2 3 4 4 4 4
5 3
1 2 3 1 2
5 3
5 5 5 5 5

Sample output
3
2
1

Explanation:
For the first test case, the minimum moves required is 3. 
One way to do so is that Hawkeye can first shoot monsters 1 and 2 in one move using the second operation. 
Then he can shoot down all monsters of type 4 using the first operation, followed by shooting monster 3 by either method.