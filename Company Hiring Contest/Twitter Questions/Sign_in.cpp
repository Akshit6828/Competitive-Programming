#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


void solve(){

    // Inputting LOG SCREEN
    vector<string> x ={"30 99 sign-in", "30 105 sign-out","12 100 sign-in","20 80 sign-in","12 120 sign-out","20 101 sign-out","21 110 sign-in"};
    int n = x.size();
    map <int,int> mp_in;
    map <int,int> mp_out;
	int max_Span;
	cin>>max_Span;
	int id, time;
	string type;
    for(int i =0;i<n;i++){
        stringstream ss(x[i]);
        ss>>id>>time>>type;
		if(type=="sign-in")
			mp_in[id] = time;
		
		else if(type=="sign-out")
		mp_out[id] = time;
    }

	cout<<"ANSWER OF LESS SPAN IS: \n";
	vector<string> ans;
	for(auto x:mp_in){
		int id =x.first;
		int fir_val = mp_in[id];
		int sec_val;
		if(mp_out.find(id)!=mp_out.end()){
		 sec_val= mp_out[id];
			if(sec_val - fir_val <=max_Span)
				ans.push_back(to_string(id));
		}

	}
	for(int i =0;i<ans.size();i++)
	cout<<ans[i]<<" ";
}

int main(){

   // solve();
    return 0;
}

