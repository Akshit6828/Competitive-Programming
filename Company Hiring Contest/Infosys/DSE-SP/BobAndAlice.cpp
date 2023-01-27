#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
long long T,N,K;
int arr[100005],pref[100005],suf[100005];

int power(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}

signed main()
{
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        if(K>=N)
        {
            cout<<power(N,K-1)<<endl;
            continue;
        }
        long ans=1;
        long p=N/K;
        long r=N%K;
        for(int i=1;i<=K;i++)
        {
            if(i<=r)
                arr[i]=p+1;
            else
                arr[i]=p;
        }
        pref[0]=0;
        for(int i=1;i<=K;i++)
            pref[i]=pref[i-1]+arr[i];
        suf[K+1]=0;
        for(int i=K;i>=1;i--)
            suf[i]=suf[i+1]+arr[i];
        for(int i=1;i<=K;i++)
            ans=(ans*((pref[i-1]*suf[i+1])%mod))%mod;
        cout<<ans<<endl;
    }
    return 0;
}
