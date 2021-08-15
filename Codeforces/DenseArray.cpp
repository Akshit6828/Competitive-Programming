#include<bits/stdc++.h>

#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "becomes = " << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    cin>>x[i];
 int count=0;
 if(n==2){ // 1 <--> 6====== 2
    cout<<(int)(max(x[0],x[1])-min(x[0],x[1]))/2;
 }
    for(int i=0;i<n-1;i++){
           
            if(max((float)x[i],(float)x[i+1])/min((float)x[i],(float)x[i+1])<=2)
                continue;
            else{
//4 2 10 1
                
                if(x[i]<x[i+1]){
                    int dis=(x[i+1])-x[i]; // 10-2=8 
                    int ini=x[i];//2
                    while (ini+2<dis)//2<=8 --> 4 , 6 ||||||||||    
                    {
                        count++;
                        ini+=2;
                    }
                    
                }
                else{
                    int dis=(x[i])-x[i+1]; // 10  - 1 = 9
                    int ini=x[i+1];// 1
                    while (ini+2<dis) // 3 , 5 , 7 
                    {
                        ini+=2;
                        count++;
                    }
                }

            }
        }
        cout<<count<<endl;
}
        
        
    

int main()
{
    boost;
    long long int t;
    cin>>t;
    while(t--)
    solve();
}