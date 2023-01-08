#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


int findKthPositive(vector<long long> &A, int k) {
        int l = 0, r = A.size() - 1, m;

        while (l < r) {
            deb(l);
            deb(r);
            
            m = (l + r) / 2;
            deb(m);
            if (A[m] - 1 - m < k)
                l = m + 1;
            else
                r = m;
        }
        return l + k;
}

void printArray(vector<long long > vt){
    cout<<"\nPrinting Array"<<endl;
    for(auto i: vt)
        cout<<i<<" ";
    
}

void trynew(int arr[], int k, int n){
    set<int> st;
    for(int i = 0; i < n ; i++){
        st.insert(arr[i]);
    }

    int count = 0;
    int ans = -1;
    int i = 0;
    while(true){

        if(st.find(i) == st.end()){
            count++;
        }
        if(count == k){
            ans = i;
            break;
        }
        i++;
    }
    cout<<ans<<endl;

}
void solveBrute(int arr[], int k, int n){
    vector<bool> x;

    long long ld = arr[n-1];
    for(int i = 0; i < n; i++){
        int ind = arr[i];
        x[ind] = true;
    }

    int count = 0;
    int ans = -1;
    for(long long i = 0; i < ld; i++){
        if(x[i] == false)
            count++;
        if(count == k){
            ans = i; 
            break;
        }
    }

    cout<<ans<<endl;
}


void solve(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i <n; i++)
        cin>>arr[i];

    trynew(arr,k,n);
    /*
    solveBrute(arr, k, n);

    vector<long long> vec;
     for(int i = 0; i <n; i++)
        vec.push_back(arr[i]);
    
    printArray(vec);
    sort( vec.begin(), vec.end() );
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    sort(vec.begin(), vec.end());
    printArray(vec);
    cout<<endl;
    cout<<findKthPositive(vec,k)<<endl;

    */
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}