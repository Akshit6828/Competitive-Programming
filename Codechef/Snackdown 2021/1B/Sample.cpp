#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>

void s(){
    ll n;
    cin>>n;
    n--;
    int times =1;
    int i =1;
    while( ( (i * (i+1))/2 ) <=n ){
        times++;
        n = n-i;
        i++;
        
    }

    cout<<times<<endl;
}

void SolveL(){
    ll n;
    cin>>n;
    int temp = n;
    n--;
    
    ll pow_times= pow(n,n);
    ll sum_times = (n*(n+1) * (n+2))/6;

    ll times = (pow_times - sum_times);
    times++;
    cout<<(times*2)<<endl;

    }
void Optimize(){
    ll n;
    cin>>n;
    ll ans = 2, k = 1; //
    int counter =0;
       n --; 
       while(n >= k){
           ++counter;
           deb(counter);
           deb(n);
           n -= k;
           deb(n);
           ans += 2;
           deb(ans);
           k++;
           deb(k);
           cout<<"*********************\n";
       }
       cout<<ans<<"\n";
}

void solveBrute(){
    int n;
    cin>>n;
    ll ans = 2;
    n -= 2;
    for(int i =2;i<=n;i++){
    n -= i;
    ans += 2;
    }
        cout<<ans+2<<"\n";      
}

void solveOptimize(){
    int n;
    cin>>n;
    n--;
    ll ans = 2;
    int i = 1;
       do{
           n -= i;
           ans += 2;
           i++;
       } while (n >= i);
        cout<<ans<<"\n";
}


void solveBrute(){
    int n;
    cin>>n;
    ll ans = 2;
    n -= 2;
    for(int i =2;i<=n;i++){
    n -= i;
    ans += 2;
    }
        cout<<ans+2<<"\n";      
}

void solveOptimize(){
    int n;
    cin>>n;
    n--;
    ll ans = 2;
    int i = 1;
       do{
           n -= i;
           ans += 2;
           i++;
       } while (n >= i);
        cout<<ans<<"\n";
}
void Nishant(){
       do{
           
           n -= i;
           ans += 2;
           i++;
       } while (n >= i);

}

void Mysol()
{
    /*bool ok = true;
    int temp = size, curInd = 0;
    while(temp>=1&&ok){

        if(temp ==1)
        break;

    int newSize = temp/2; // newSize = 4
    vi y(newSize); // {_,_,_,_}
    for(int i =0; i<temp;i+=2){    // 0 2 4 6
     cout<<"I is "<<i<<endl;
        sort(x.begin(), x.end()); //  1 2 3 4 5 6 7 8
        if(abs(x[i] - x[i+1])<=1){ // abs(0-1) , abs(2-3) , abs(4-5) , abs(6-7) 
        y[curInd] = x[i] + x[i+1]; // y[0] , y[1] , y[2] , y[3];
        curInd++;
        }
        else{
        ok = false;
        break;
        }
    }

    if(ok){
    x = y;
    temp = temp/2;
    curInd = 0;
    }
    else
    break;
    }*/
}
void checkOuterWhile(){
    bool ok = true;
      while(ok){
          for(int i  =0;i<5;i++){
          if(i ==3){
          ok = false;
          break;
          }
           cout<<i<<endl;
          }
      }  

}

void checkVec(){
    vi a {1,2,3,4};
    vi b {2};
    a = b;
    cout<<a.size();
}
void solve(){

    checkVec();
    /*
    int n;
    cin>>n;

     vi x(n);
     for(int i =0;i<n;i++)
     cin>>x[i];
     int c =0;
     int size= n;

     while(size>=1){

     sort(x.begin(),x.end());
     for(int i =0;i<size;i+=2){
         cout<<"SIZE for LOOP ENTERING IS "<<size<<endl;
         x[c] = x[i] + x[i+1];
         x.erase(x.begin() + i);
         cout<<"Size of new vec  = "<<x.size()<<endl;
         c++;
     }
     size = size/2;
     cout<<"Size /2 executed and size is "<<size<<endl;
     c =0;
     }

     cout<<x[0];*/

     
}

int main(){
    boost;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}