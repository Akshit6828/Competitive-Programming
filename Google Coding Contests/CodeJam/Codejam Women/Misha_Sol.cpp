#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);




int main(){
    eff;
    int t,n,k=1;
    cin>>t;
    while(k<=t)
    {
        cin>>n;
        int arr[n];
        string s="A";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int j=1;
            
string f="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            char ch1='B',ch2='A';
            string s1="";
            while(j<=arr[i]){
                if(arr[i+2]-arr[i+1]>1){
                if((i+1)%2!=0){ //odd blocks.... 
                    s=s+ch1;
                    ch1++;
                }
                else{
                   
                    s1=ch2+s1;
                    ch2++; 
                }
                
                j++;
                
            }
            else{
                 if((i+1)%2!=0){ //odd blocks....
                    if(j==arr[i]-1){
                         ch1++;
                        s=s+ch1;
                    }
                    else{
                    s=s+ch1;
                    ch1++;
                    }
                }
                else{
                    s1=ch2+s1;
                    ch2++; 
                }
                
                j++;

            }
            s=s+s1;
        }
         cout<<"Case #"<<k<<": "<<s<<"\n";
         k++;

    }
    }
    return 0;
}