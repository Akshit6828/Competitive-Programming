#include<bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

int main()
{
    int n, ans = 0;
    long k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        long temp;
        cin>>temp;
        pq.push(temp);
    }

    while(!pq.empty())
    {
        long t = pq.top();
        pq.pop();

        if(t<=k)
        {
            ans+=1;
            continue;
        }
        else{
            ans+=1;
            pq.push(t-k);
        }
    }
    cout<<ans<<endl;
    return 0;
}
