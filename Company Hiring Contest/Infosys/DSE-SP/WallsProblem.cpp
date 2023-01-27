#include<bits/stdc++.h>
using namespace std;

int n,k,x[100005],ans;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>k) //if the wall takes more than k minutes to dry
            ans+=x[i]; //add the drying time
        else
            ans+=k; //otherwise add k minutes
    }
    cout<<ans<<endl;
    return 0;
}
