//Kth number Codeforces


#include<bits/stdc++.h>
#define Fo(i,a,n) for(int i= a;i<n;i++)
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define ld long double
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
using namespace std;

void solve(){
int n;
int q;
cin>>n>>q;

int count=0;
vector<int> x;
Fo(i,0,n){
int c;
cin>>c;
x.push_back(c);
count+=c;
}
//1 1 0 1 0
// 2 3:--- 1
for(int lm=q;lm>0;lm--){
    int t, xn;
        cin>>t>>xn;
    if(t==1){
        if(x[xn])
        count--;
        else
        count++;
        x[xn]=1-x[xn];
    }
    else{
        
        if(count>=xn)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }

}

}


int main()
{
    boost;
   solve();
    return 0;
}