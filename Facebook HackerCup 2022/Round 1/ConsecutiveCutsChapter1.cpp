#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


// file handling
#define in(s) freopen(s, "r", stdin)
#define out(s) freopen(s, "w", stdout)

void reverseArr(vector<int> &arr, int low, int high){
	while(low< high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void printVector(vector<int> arr){
    cout<<"arr = ";
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
}
void leftRotate(vector<int> &arr, int k){ // TC: O(N) , SC: O(1)
	reverseArr(arr, 0, k-1);
	reverseArr(arr, k, arr.size()-1);
	reverseArr(arr, 0, arr.size() -1);
}

bool solve(){
    int n;
    long long k;
    cin>>n>>k;
    
    if(k > n)
        k = k%n;

    vector<int> arr(n), res(n);
    string org = "";
    for(int i = 0; i<n ;i++){ 
        cin>>arr[i];
        org+=to_string(arr[i]);
    }
    for(int i = 0; i<n ;i++) 
        cin>>res[i];

    auto it = find(res.begin(), res.end(), arr[0]);

    int index = -1;
    string str = "";
    if (it != res.end()) {
       index = it - res.begin();
       for(int  i = index; i<n;i++) 
        str+=to_string(res[i]);
       for(int  i = 0; i< index; i++) 
        str+=to_string(res[i]);
    }
   
    return org == str;

}
int main(){
    boost;
    in("A_val.txt");
    out("Pass_Out_A.txt");
    int t;
    cin>>t;
    int c = 0;
    while(t--){
    bool ans = solve();
    cout<<"Case #"<<++c<<":";
    ans == true?cout<<"YES\n": cout<<"NO\n";
    
    }

    return 0;
}