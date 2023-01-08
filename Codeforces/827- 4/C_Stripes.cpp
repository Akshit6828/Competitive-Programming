#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>
/*
RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
----------------------
RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB

00 01 02 03 04 05 06 07
10 11 12 13 14 15 16 17
20 21 22 23 24 25 26 27
30 31 32 33 34 35 36 37
40 41
50 51
60 61
70 71 72 73 74 75 76 77
*/

/*
Check algo
** Rows
00-07
10-17

** Cols
00-70
01-71
02-72
*/
bool validateRow(int ind, char x[8][8]){
        char c = x[ind][0];
        if(c == '.')
            return false;
        for(int j = 0; j <8; j++){
            if(x[ind][j] != c || x[ind][j] == '.')
                return false;
        }
        return true;
}

bool validateCol(int ind, char x[8][8]){
        char c = x[0][ind];
        if(c == '.')
            return false;
        for(int j = 0; j < 8; j++){
            if(x[j][ind] != c || x[j][ind] == '.'  )
                return false;
        }
        return true;
}

void brute(){
    char x[8][8];
    for(int i = 0; i <8;i++){
        for(int j = 0; j < 8; j++)
            cin>>x[i][j];
    }
    
    // Checking row
    /*
    00 01 02 03 04 05 06 07
    10 11 12 13 14 15 16 17
    20 21 22 23 24 25 26 27
    30 31 32 33 34 35 36 37
    40 41
    50 51
    60 61
    70 71 72 73 74 75 76 77 
    */

   /*
   RRRR
   ....
   RRRR
   RRRR

   */
   // Checking row
    for(int i = 0; i < 8; i++){
        char c = 'R';

        bool ok = false;
        for(int j = 0; j <8; j++){
            if(x[i][j] != c || x[i][j] == '.'){
                break;
            }
            if(j == 7)
                ok = true;
        }

        if(ok){  
            cout<<c<<endl;
            return;
        }
    }

    // Col check;
    for(int i = 0; i < 8; i++){
        char c = 'B';

        bool ok = false;
        for(int j = 0; j < 8; j++){
            if(x[j][i] != c || x[j][i] == '.'){
                break;
            }
            if(j == 7)
                ok = true;
        }

        if(ok){  
            cout<<c<<endl;
            return;
        }
    }
    
}
void solve(){
    char x[8][8];
    
    for(int i = 0; i <8;i++){
        for(int j = 0; j < 8; j++)
            cin>>x[i][j];
    }

    bool rows[8];
    bool cols[8];

    /*
    [F F F F F F F]
    [F] RRRRRRBB
    [F] .B.B..BB
    [F] RRRRRRBB
    [F] .B.B..BB
    [F] .B.B..BB
    [F] RRRRRRBB
    [F] .B.B..BB
    [F] .B.B..BB

    RRRRRRRB
    B......B
    B......B
    B......B
    B......B
    B......B
    B......B
    RRRRRRRB
    
    */
    for(int i = 0; i < 8; i++){
        if((x[i][0] != x[i][7]) || (x[i][0] == '.')|| (x[i][7] == '.'))
            rows[i] = false;
        else
            rows[i] = true;

        if((x[0][i] != x[7][i]) || (x[0][i] == '.')|| (x[7][i] == '.'))
            cols[i] = false;
        else
            cols[i] = true;
    }

    for(int i = 0; i < 8;i++){

        if(rows[i] == true){ // Lets traverse row
            bool ans = validateRow(i,x);
            if(ans){
                cout<<x[i][0]<<endl;
                return;
            }
        }
        if(cols[i] == true){
            bool ans = validateCol(i,x);
            if(ans){
                cout<<x[0][i]<<endl;
                return;
            }
        }


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