

#include<bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(0); cin.tie(0)
#define deb(x) cout << #x << "becomes = " << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 
#define Fo(i,a,n) for(ll i=a;i<n;i++)
using namespace std;


template<class T> void read(T& x) {
	cin >> x;
}
inline long long int highestOneLeftBit(long long int i) { 
    i |= (i >>  1); 
    i |= (i >>  2);  
    i |= (i >>  4);
    i |= (i >>  8);
    i |= (i >> 16);
    i=(i - (i >> 1));

    return i;
}

inline void solve()
{
long long int n, x;
        cin >> n >> x;

      

        long long int arr[n];

        for(long long int i = 0; i < n; i++)
       read(arr[i]);

       long long int i = 0;
           long long int z;

        for(long long int l = x; l > 0 && i < n-1; l--)
        {
            bool flag = 0;
           long long int p = log2(highestOneLeftBit(arr[i]));
            long long int r = 1<<p;
            arr[i] = arr[i] ^ r;

            for(long long int j = i + 1; j < n; j++)
            {
                if((arr[j] ^ r) < arr[j])
                {
                    arr[j] = arr[j] ^ r;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                arr[n - 1] = arr[n - 1] ^ r;
            }

            while(arr[i] <= 0)
            {
                i++;
            }

           z  = l + 1;
        }
            if(z > 0)
            {
                if(n < 3 &&z%2>0) 
                {
                    arr[n - 1] = arr[n - 1] ^ 1;
                    arr[n - 2] = arr[n - 2] ^ 1;
                }
            }


        

        for(long long int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout <<"\n";
}
int main()
{
    boost;
    long long int t;
    cin >> t;

    while(t--)
    solve();
}