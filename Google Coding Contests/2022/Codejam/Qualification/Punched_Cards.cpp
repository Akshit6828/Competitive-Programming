#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

/*
3 * 4: (7,9)

..+-+-+-+
..|.|.|.|
+-+-+-+-+
|.|.|.|.|
+-+-+-+-+
|.|.|.|.|
+-+-+-+-+

2*2: (5,5)row*2  + 1, col*2 + 1
..+-+
..|.|
+-+-+
|.|.|
+-+-+

2*3 = (5,7)
..+-+-+   00 01 02 03 04 05 06 : row = even && col[even] = +, col[odd] = -
..|.|.|   10 11 12 13 14 15 16:  row = odd && col[even] = . , col[odd] = |
+-+-+-+   20 21 22 23 24 25 26
|.|.|.|   30 31 32 33 34 35 36
+-+-+-+   40 41 42 43 44 45 46

case1: 00, 01, 10, 11
*/

int dpx[4] = {0,0,1,1};
int dpy[4] = {0,1,0,1};

bool isSpecialCase(int x, int y){
    for(int i = 0; i<4;i++){
        if(x == dpx[i] && y == dpy[i])
            return true;
    }
    return false;
}

void printCard(int x, int y){
    // Special case for first cell:
    if(isSpecialCase(x,y))
            cout<<".";
    else{
        // if row is even
        if(x%2 == 0){
            if( (x+y) %2 == 0)
                cout<<"+";
            else
                cout<<"-";  
        }
        else{
            if( (x+y)%2 == 0)
                cout<<".";
            else
                cout<<"|";
        }
    }
}

void solve(){
    int row,col;
    cin>>row>>col;
    cout<<endl;
    for(int i = 0;i <(row*2) + 1; i++){
        for(int j = 0; j<(col*2) + 1; j++){
            printCard(i,j);
        }
        cout<<endl;
    }
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solve();
    }
    return 0;
}