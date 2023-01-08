#include<bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> grid){
    cout<<"\nPrinting Matrix\n";
    for(auto row: grid){
        for(auto element: row)
            cout<<element<<" ";
        cout<<endl;
    }
}

bool InBounds(int r, int c, int n){
    return (r >=0 && c >=0 ) && (r<n && c<n);
}

int dfs(int i , int j , vector<vector<int>> grid){
    int n = grid.size();
    if(!InBounds(i,j, n)) // The current coordinate (i,j) are out of matrix
        return 0;
    
    if(grid[i][j] == 2) // We found a mining mine.
        return 0;
    
    grid[i][j] = -1; // Setting current i,j so that we dont come back again to this coordinate while traversing further.
    // else it would cause infinite recursion calls which would case Stack Overflow.

    int left = 0, right = 0, top = 0, bottom = 0;
    
    // Traverse Top
    if(InBounds(i-1,j,n) && grid[i-1][j] == 1 || grid[i-1][j] == 2)
        top = dfs(i-1,j,grid);

    // Traverse Right
    if(InBounds(i,j+1,n) && grid[i][j+1] == 1 || grid[i][j+1] == 2)
        right = dfs(i,j+1,grid);

    // Traverse Down
    if(InBounds(i+1,j,n) && grid[i+1][j] == 1 || grid[i+1][j] == 2)
        right = dfs(i+1,j,grid);

    // Traverse Left
    if(InBounds(i,j-1,n) && grid[i][j-1] == 1 || grid[i][j-1] == 2)
        right = dfs(i,j-1,grid);

    return 1 + max({left,right,top,bottom});

    
}
int solve(vector<vector<int>> grid){
    int ans = INT_MAX;
    int n = grid.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                int longestPathTo2 = dfs(i,j,grid);
                int ans = min(ans ,longestPathTo2);
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    int c = 1 ;
    while(t--){
        int n, mines;
        cin>>n>>mines;
        
        vector<vector<int>> grid(n , vector<int> (n));

        for(int i = 0; i < mines ;i++){
            int row, col; 
            cin>>row>>col;
            row--; // For converting to 0 based indexing
            col--;
            grid[row][col] = 2;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int val;
                cin>>val;
                if(grid[i][j] != 2)
                    grid[i][j] = val;
            }
        }
        
        printMatrix(grid);
        cout<<"Case #"<<c++<<solve(grid);
    }
   
    return 0;
}

/*
TC:
1
3 2
1 3
3 3 
0 1 1
0 1 0
0 1 1

*/