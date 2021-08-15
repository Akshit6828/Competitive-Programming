#include <iostream>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
 inline bool isEven(ll a)
{
    if(a%2==0)
    return true;
    else
    return false;
}
inline bool isOdd(ll a)
{
    if(a %2 ==1)
    return true;
    else
    return false;
}
void solve()
{
    ll int a,b;
    cin>>a>>b;
    int count=0;
    if(isEven(a)&&isEven(b))
        cout<<2* (a/2)*(b/2)<<endl;
    else if(isOdd(a)&&isOdd(b))
     cout<<((a/2) * (b/2) ) + ((a/2) +1)*((b/2) +1) <<endl;
    
    else if(isOdd(a)&&isEven(b))
        cout<<(a/2)*(b/2)+ ((a/2) + 1 )*(b/2)<<endl;
    
    else
        cout<<(a/2)*(b/2) + (a/2)*((b/2)+1)<<endl;
    
}
int main() {
    boost;
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}