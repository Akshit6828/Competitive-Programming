#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>


bool checkPalindrome(int n){ 
	
	if(n<=9&&n>=0) return true; 
		
	int rev =0;
	int num = n;

	while(num>=1){
	int lastDigit = num%10; 
	rev = rev*10 + lastDigit; 
	num = num/10; 
	}

	return (rev == n);
}

void solve2(){
        long int n;
        cin>>n;
        long int ans = 0;
	
		int i =0;
		for(i =1;(i*i)<= n;i++){ 
				if(n%i==0){
						if(checkPalindrome(i) && checkPalindrome(n/i) && (n/i !=i)){
                            ans+=2;   
                        }
                        else if(checkPalindrome(i))
                            ans++;
                        else if(checkPalindrome(n/i))
                            ans++;
                        
                }
		}
        cout<<ans<<endl;
}
void solve(){
        long int n;
        cin>>n;
		int ans = 0;
		int i =0;
		for(i =1;(i*i)<= n;i++){ 
				if(n%i==0){
						if(checkPalindrome(i)){
                            ans++;
                        }
                        
                }
		}

		i--; 

		for( ; i>=1 ; i--){ 
				if(n%i==0 && i!=(n/i)) {
                    if(checkPalindrome(n/i)){
                        ans++;
                        deb(n/i);
                    }
                        
                }	
		}
        cout<<ans<<endl;
}

int main(){
    boost;
    int c=1;
    int t;
    cin>>t;
    while(t--){
    cout<<"Case #"<<c++<<": ";
    solve2();
    }
    return 0;
}