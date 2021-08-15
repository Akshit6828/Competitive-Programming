#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//-------
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define ll long long
#define ld long double

vector<int>::iterator it;

bool find_element(vector<int> &x,int ser,int cur){
        it = find (x.begin()+cur+1,x.end(), ser); 
    if (it != x.end()) {
        x[it - x.begin()]=-1;
        cout<<"Ser rev pos being made -1 is "<<it-x.begin()<<endl;
        return true;
    } 
    else
    return false;
}

void solve(){
     
    ll n,k;
    cin>>n>>k;
    vector<int> x;
    for(ll i=0;i<n;i++){
         int t;
    cin>>t;
    x.push_back(t);
    }
    int count=0;
    sort(x.begin(),x.end());
    for(ll i=0;i<n;i++){
       if(x[i]>=k){
          cout<<"x[i] is greater than k ="<<x[i]<<endl;
        count++;
       continue;
       }
       else if(x[i]!=-1){
        int val1=x[i];
        int ser = k - val1;
      cout<<"Element to search is "<<ser<<endl;
        while(ser<k){
           bool re= find_element(x,ser,i);
            if(re){
                cout<<"Ser found where ser ="<<ser<<endl;
                  count++;
                  x[i]=-1;
             cout<<"x[i] being made -1 is pos: "<<i<<endl;
        deb(count);
                  break;
    
            }
            else{
                cout<<"Else executed as ser isnot found and ser incremented"<<endl;     
                ser++;
                deb(ser);
            }
        }    
    }
    }
    cout<<count<<endl;


}
int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}