#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define deb(x) cout<< #x << " : " << x<<"\n";
#define maxn 100005

void misha(){
    int n;
    cin>>n;
    int count = 0;
    for(int c = 1; c <= n; c++)
        {
            for(int b = c; b <= n; b+=c)
            {
                if(b%c == 0)
                {
                    for(int a = c; a<=n; a+=b)
                    {
                        if(a%b == c)
                         count++;
                    }
                }
            }
            
        }
}

void solveTriplets(){
    int n;
    cin>>n;
    int ans =0;
    for(int b =2;b<=n;b++){
        //deb(b); 
        for(long int c = 1 ; c<=sqrt(b);c++)
        {
            //deb(c);
            for(int a =c;a<=n;a++){
                deb(c);
                if(a%b==c &&b%c==0){
                ans++;
                //cout<<"a  b  c : "<<a<<" "<<b<<" "<<c<<"\n";
                //deb(ans);
                }
                
            }
        }
    }
    cout<<ans <<"\n"; 
    
}
int return_Dp(int n){
    if(n == 1)
    return 0;
    else
    return n-1 + return_Dp(n-1);
}
void solveDP(){
    int n;
    cin>>n;
    cout<<return_Dp(n)<<"\n"; 
    
}
 
void solveBrute(){

int n;
cin>>n;
int count=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        int t=i%j;
        if(t!=0&&j%t==0){ // Making sure mod 0 is not considered
        count++;
    }
    }
}
cout<<count <<"\n";       
}

int main(){
   // boost;
    int t;
    cin>>t;
    while(t--)
    misha();
    return 0;
}