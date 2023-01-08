#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


/*
Color (C), a string consisting of lowercase letters of the English alphabet, representing the color of the fabric.
Durability (D), an integer representing the durability of the fabric.
Unique identifier (U), an integer representing the ID of the fabric.
*/


struct COLORS{
    string color;
    int durability;
    int uid;
};


bool cmp1(COLORS c1, COLORS c2){
    if(c1.color == c2.color){
        return c1.uid < c2.uid;
    }

    return c1.color < c2.color;
}

bool cmp2(COLORS c1, COLORS c2){
    if(c1.durability == c2.durability){
        return c1.uid < c2.uid;
    }
    return c1.durability < c2.durability;
}

void solve(){
    int n;
    cin>>n;
    COLORS x[n];
    COLORS y[n];

    for(int i = 0; i<n; i++){
        cin>>x[i].color;
        cin>>x[i].durability;
        cin>>x[i].uid;
        y[i].color = x[i].color;
        y[i].durability = x[i].durability;
        y[i].uid = x[i].uid;
    }

    sort(x, x + n , cmp1);
    sort(y, y + n , cmp2);
    
    int same = 0;
    for(int i = 0; i < n ;i++){
        if(x[i].uid == y[i].uid)
            same++;
    }

    cout<<same<<endl;
}

int main(){
    boost;
    int c=0;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<++c<<": ";
    solve();
    }
    return 0;
}

