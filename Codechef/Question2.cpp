#include <bits/stdc++.h>
using namespace std;
int profit=0;
int addprofit(int j,int curleft,int x[],int n)
{

            int i;
            for(i=j;i<n;i++)
            {
                if  (i==n-1&&x[i]>x[i-1])
                    {
                        profit+=x[i]-curleft;
                        break;
                    }
                else{
                         if(x[i]>curleft&&x[i]>x[i+1])
                        {
                            profit+=x[i]-curleft;
                            break;
                        }
                    }
            }

            return i;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
   int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
  int curmax=-1;
  int curleft=-1,j;
    for (int i =0; i < n-1; i++)
    {
        if (x[i] < x[i+1]){
            curleft=x[i];
            j=i+1;
           i=addprofit(j,curleft,x,n);
        }

    }
 cout<<profit;

    return 0;
}
