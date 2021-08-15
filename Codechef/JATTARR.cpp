#include <iostream>
using namespace std;
bool check(long int n,long int d){
    string nn=to_string(n);
    string dd=to_string(d);
    if (nn.find(dd) != string::npos)
        return true;
    else
    return false;
}
void solve(){
 
    long int n,d;
        cin>>n>>d;
       
        for(int i=0;i<n;i++){
            long int val;
            cin>>val;
                int flag=0;
            while(val>0){
                if(check(val,d)){
                    flag=1;
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    val=val-d;
                    check(val,d);
                }
                
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
