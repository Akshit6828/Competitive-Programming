#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


// file handling
#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)

/*
1≤T≤85
1 \leq R, C \leq \mathbf{100}1≤R,C≤100
*/

/*
Final painting has at least two tree friends, that is, two trees which are each adjacent to it (directly to its north, south, east, or west). 
If there are multiple solutions, you may print any one of them.

*/
void printMatrix(vector<vector<char>> mat){
    int r = mat.size();
    int c = mat[0].size();
    for(int  i = 0; i <r ; i++){
        for(int j = 0;j < c; j++)
            cout<<mat[i][j];
        if(i != r-1)
            cout<<endl;
    }
}
int dx[] = {-1, 0, 1, 0};
int dy[] = {0 , 1, 0, -1};


bool inBounds(int r, int c, int rows, int cols){
    return (r < rows && c < cols) && ( r>=0 && c >=0 );
}

void DFS(vector<vector<char>> &mat, int i, int j, int r, int c){

    cout<<"DFS Called for ["<<i<<" ] ["<<j<<" ] "<<endl;
    if(!inBounds(i,j,r,c)){
         return;
    }

    if(mat[i][j] == '-')
    return;

    if(mat[i][j] != '^')
        mat[i][j] = '-';

    DFS(mat,i,j+1,r,c);

    DFS(mat,i-1,j,r,c);

    DFS(mat,i+1,j,r,c);

    DFS(mat,i,j-1,r,c);
}


void solve(){
    int r, c;
    cin>>r>>c;

    vector<vector<char>> mat(r, vector<char> (c));

    int treecount = 0;

    for(int i = 0;i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
            if(mat[i][j] == '^')
                treecount++;
        }
    }

    if(treecount == 0){
       cout<<"Possible hai"<<endl;
       printMatrix(mat);
       return;
    }

    if(r == 1 || c == 1){
        cout<<"Impossible";
        return;
    }

    for(int i = 0; i <r; i++){
        for(int j = 0; j < c; j++){
            if(mat[i][j] == '^'){
                cout<<"Found at "<<"[ "<<i<<" ] [" <<j<<"] "<<endl;
                
                int count = 0;
                for(int k = 0;k < 4;k++){
                    int x = i;
                    int y=  j;
                    int newX = x + dx[k];
                    int newY = y + dy[k];
                    if(inBounds(newX,newY,r,c) && mat[newX][newY] == '^')
                        count++;
                }

                if(count >=2) // The current tree is right
                    continue;
                else{
                    cout<<"DFS Called for this"<<endl;
                    DFS(mat,i, j, r, c);
                }
                    
            }
            
        }
    }
    
    cout<<"Possible"<<endl;
    printMatrix(mat);


}

void solve_tc(){
    int r, c;
    cin>>r>>c;

    vector<vector<char>> mat(r, vector<char> (c));

    int treecount = 0;

    for(int i = 0;i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>mat[i][j];
            if(mat[i][j] == '^')
                treecount++;
        }
    }

    if(r == 1 || c == 1){
        if(treecount){
        cout<<"Impossible";
        return;
        }
    }    

    if(treecount){
        for(int i = 0; i <r; i++){
            for(int j = 0; j < c; j++){
                mat[i][j] = '^';
            }
        }
    }
    cout<<"Possible"<<endl;
    printMatrix(mat);
    
}
int main(){
    boost;
    in("Pass_B.txt");
    out("Pass_Out_B.txt");
    int t;
    cin>>t;
    int c = 0;
    while(t--){
    cout<<"Case #"<<++c<<": ";
    solve_tc();
    cout<<endl;
    }

    return 0;
}