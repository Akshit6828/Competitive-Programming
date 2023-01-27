#include<bits/stdc++.h>
using namespace std;

long n;
int q;
vector<int> s(100005),e(100005),p(100005);

int main()
{
    cin>>n>>q;
    for(int i=0;i<q;i++)
    {
        cin>>s[i]>>e[i];
        p[i]=e[i]-s[i]+1; //length of the street part to buy
    }
    sort(p.begin(), p.begin() + q);
    
    int res=n;
    for(int i=0;i<q;i++)
    {
        res-=p[i]; //subtracting each bought street part's length
        if(res<0) //if the remaining street length becomes negative
        {
            res+=p[i]; //add the last subtracted length
            break;
        }
    }
    cout<<res<<endl; //remaining street length
    return 0;
}
