#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>


void printRE(int r, int c){
    int i,j;
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if((i+j)%2==0)
        cout<<"R";
        else
        cout<<"W";
        }
         cout<<endl;
    }
   
}
void printRO(int r, int c){
    int i,j;
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if((i+j)%2==1)
        cout<<"R";
        else
        cout<<"W";
    }
    cout<<endl;
    }
}
void printWE(int r,int c){
    int i,j;
   // cout<<"WE Called";
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if((i+j)%2==0)
        cout<<"W";
        else
        cout<<"R";
    }
    cout<<endl;   
    }
}
void printWO(int r,int c){
    int i,j;
   // cout<<"WO Called";
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if((i+j)%2==1)
        cout<<"W";
        else
        cout<<"R";
    }
    cout<<endl;   
    }
}
void solve(){
    int r,c;
    cin>>r>>c;
    char x[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>x[i][j];
    }
    string ans="";
    int flag=0;
   string red_ind,w_ind;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            if(x[i][j]=='R'||x[i][j]=='W'){
                flag=1;
                if(x[i][j]=='R'){
                    if((i+j)%2==0){
                          if(red_ind=="odd"||w_ind=="even"){
                              ans="NO";
                              break;
                          }
                          else{
                              red_ind="even";
                          }
                    }
                  
                    else{
                        if(red_ind=="even"||w_ind=="odd"){
                            ans="NO";
                            break;
                        }
                        else
                         red_ind="odd";
                    }

                }
                if(x[i][j]=='W'){
                    if((i+j)%2==0){
                        if(w_ind=="odd"||red_ind=="even"){
                            ans="NO";
                            break;

                        }
                        else{
                            w_ind="even";
                        }
                    }
                    else{

                        if(w_ind=="even"||red_ind=="odd"){
                            ans="NO";
                            break;
                        }
                        else{
                            w_ind="odd";
                        }

                    }
                }
            }
            else
            continue;
        }
        if(flag==1)
        break;
    }

// cout<<"FINAL Call for RIND =  "<<red_ind<<" AND W_IND = "<<w_ind <<endl;


    if(flag==1&&ans!="NO"){
    int i,j;
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(x[i][j]=='R'){
          //  cout<<"R FOUND AT I= "<<i<<" AND J ="<<j <<endl;
        
            if(red_ind=="even"){
                if((i+j)%2==1){
                ans="NO";
                break;
                }
                else
                ans="YES";
            }
            if(red_ind=="odd"){
                if((i+j)%2==0){
                ans="NO";
                break;
                }
                else
                ans="YES";
            }
        }
        if(x[i][j]=='W'){
            
             if(w_ind=="odd"){
                if((i+j)%2==0){
                ans="NO";
                break;
                }
                else
                ans="YES";
            }

            if(w_ind=="even"){
                if((i+j)%2==1){
                ans="NO";
                break;
                }
                else 
                ans="YES";
            }
        }
    }
    }

    }
    else if(flag==0){
      ans ="YES";
      red_ind="even";

     }
    cout<<ans <<endl;
    if(ans=="YES"){
        if(red_ind=="even")
        printRE(r,c);
        else if(red_ind=="odd")
        printRO(r,c);
        else if(w_ind=="even")
        printWE(r,c);
        else if(w_ind=="odd")
        printWO(r,c);

    }
    

}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}