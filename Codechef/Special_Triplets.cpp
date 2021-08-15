#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define deb(x) cout<< #x << " : " << x<<"\n";

void solveTriplets(){
    int n;
    cin>>n;
    int ans =0;
    for(int b =2;b<=n;b++){ // Loop from B to N
        //deb(b); 
        for(long int c = 1 ; c<=sqrt(b);c++) // Finding each values until Root of B.
        {
            //deb(c);
            int temp  = sqrt(n)*c;
            if(b%c==0&&temp%c==0&&temp!=c){
                for(int a =c;a<=n;a++){
                //deb(c);
                if(a%b==c && a%temp==c){
                ans+=2;
                continue;
                //cout<<"a  b  c : "<<a<<" "<<b<<" "<<c<<"\n";
                //deb(ans);
                }
                if(a%b==c){
                    ans+=1;
                }
                if(a%temp==c){
                ans+=1;
                }
            }
            
        }
    }
    cout<<ans <<"\n"; 
    
}
}

 
int solveFactors(int n){
    int triplet_count =0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j+=i){
            if(j%i == 0){
                for(int a = i; a<=n; a+=j)
                {
                    if(a%j == i)
                        triplet_count++;
                }
            }
        }
    }
    return triplet_count;     
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
    while(t--){
    int n;
    cin>>n;
    cout<<solveFactors(n) <<"\n"; 
    
        
    }
    
    return 0;
}