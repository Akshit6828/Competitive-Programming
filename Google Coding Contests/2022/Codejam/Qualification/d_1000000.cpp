#include <bits/stdc++.h>
using namespace std;
#define boost  ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define deb(x) cout << #x << " = " << x << "\n"
#define vi vector<int>

void solve(){
    int n;
    cin >> n;
    vi x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    int len = 1;
    for (auto i : x){
        if (i >= len)
            len+=1;
    }
    len--;
    cout<<len<<endl;
}

int main()
{
    boost;
    int c = 1;
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << c++ << ": ";
        solve();
    }
    return 0;
}