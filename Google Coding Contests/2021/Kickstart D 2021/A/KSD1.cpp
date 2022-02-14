#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define vi vector<int>
#define int long long



void solve(){
    int x[3][3];
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            if(i==1&&j==1)
            continue;
            else
            cin>>x[i][j];
        }
    }

    /*
    00 01 02
    10 11 12
    20 21 22

    */
    int count1=0,count2=0,count3=0,count4 =0;
    int ans1 = (x[0][0] + x[2][2])/2;
    int ans2 = (x[0][2] + x[2][0])/2;
    int ans3 = (x[1][0] + x[1][2] )/2;
    int ans4=  (x[0][1] + x[2][1])/2;
    
    x[1][1]=ans1;
    // Checking Ans1 value.
    // Row iterate
    for(int i =0;i<3;i++){
        if(x[i][0]-x[i][1]==x[i][1]-x[i][2])
        count1++;
    }
    // Col interate
    for(int i =0;i<3;i++){
        if(x[0][i]-x[1][i]==x[1][i]-x[2][i])
        count1++;
    }
    // Pre Diagnol Interate
        if(x[0][0]-x[1][1]==x[1][1]-x[2][2])
        count1++;
    // Non Pre Diagnol Interate
    if(x[2][0]-x[1][1]==x[1][1]-x[0][2])
    count1++;
    
    x[1][1]=ans2;

    // Checking Ans2 Value;
    for(int i =0;i<3;i++){
        if(x[i][0]-x[i][1]==x[i][1]-x[i][2])
        count2++;
    }
    // Col interate
    for(int i =0;i<3;i++){
        if(x[0][i]-x[1][i]==x[1][i]-x[2][i])
        count2++;
    }
    // Pre Diagnol Interate
        if(x[0][0]-x[1][1]==x[1][1]-x[2][2])
        count2++;
    // Non Pre Diagnol Interate
    if(x[2][0]-x[1][1]==x[1][1]-x[0][2])
    count2++;

    x[1][1] = ans3;
//Checking for ans3;
     for(int i =0;i<3;i++){
        if(x[i][0]-x[i][1]==x[i][1]-x[i][2])
        count3++;
    }
    // Col interate
    for(int i =0;i<3;i++){
        if(x[0][i]-x[1][i]==x[1][i]-x[2][i])
        count3++;
    }
    // Pre Diagnol Interate
        if(x[0][0]-x[1][1]==x[1][1]-x[2][2])
        count3++;
    // Non Pre Diagnol Interate
    if(x[2][0]-x[1][1]==x[1][1]-x[0][2])
    count3++;


    x[1][1]=ans4;

    // checking for ans4;
    for(int i =0;i<3;i++){
        if(x[i][0]-x[i][1]==x[i][1]-x[i][2])
        count4++;
    }
    // Col interate
    for(int i =0;i<3;i++){
        if(x[0][i]-x[1][i]==x[1][i]-x[2][i])
        count4++;
    }
    // Pre Diagnol Interate
        if(x[0][0]-x[1][1]==x[1][1]-x[2][2])
        count4++;
    // Non Pre Diagnol Interate
    if(x[2][0]-x[1][1]==x[1][1]-x[0][2])
    count4++;


    //cout<<max(count1,count2)<<"\n";
    int n1 =count1;
    int n2 =count2;
    int n3 =count3;
    int n4 =count4;

int maxx = (n1 > n2 && n1 > n3 && n1 > n4) ?
               n1 : ((n2 > n3 && n2 > n4) ?
               n2 : (n3 > n4 ? n3 : n4));

    cout<<maxx <<"\n"; 


}

signed main(){
    boost;
    int t;
    int c=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<c++<<": ";
        solve();
    }
    
    return 0;
}