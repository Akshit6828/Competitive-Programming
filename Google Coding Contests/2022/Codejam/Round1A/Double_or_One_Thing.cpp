#include <bits/stdc++.h>
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define ll long long
#define deb(x) cout << #x << " = " << x << "\n"
#define deb2(x,y) cout << #x << " = " << x << " and "<< #y <<" = "<<y<< "\n"
#define vi vector<int>


/*  void try1(){
    string str, result = "";
    cin >> str;
    int len = str.length();
    bool found = false;
    char cur = str[len - 1];
    int lst = len;
    while (str[lst] > str[len - 1]){
        lst--;
    }
    result.push_back(str[len -1]);
    for (int i = lst; i >= 0; i--){
       
        if (str[i] <= cur && found == true)
        {
            result.push_back(str[i]);
            result.push_back(str[i]);
            cur = str[i];
        }
        else if (str[i] <= cur && found == false)
        {
            result.push_back(str[i]);
            if (str[i] < cur)
                found = true;
            cur = 
        }
        else
        {
            result.push_back()
        }
    }
}*/
/*
Corner Case:
XYZ -- XXYYZ
AAA -- AAA
BBAB -- BBAAB
BBABB - BBAABB
BB
CD-> CCD

case 1: s[i] == s[i];
case 2: s[i] > s[i];
case 3: s[i] < s[i];

*/
void solve()
{
    string s, result;
    cin>>s;
    int len = s.length(); // PEEL 
    bool ok = false;
    
    for(int i = 0, j = 1; j<len; i++, j++){

        if(s[i] == s[j]){
            if(ok)
                result.push_back(s[i]);
            result.push_back(s[i]);
        } 
        else if(s[i] < s[j]){
            if(!ok)
                ok = true;
            result.push_back(s[i]);
            result.push_back(s[i]);
        }
        else{
            if(!ok){
                ok = true;
            }
            result.push_back(s[i]);
        }
    }
    if(s[len- 1] < s[len-2]) {
        result.push_back(s[len-1]);
        result.push_back(s[len-1]);
    }
    else{
       result.push_back(s[len-1]);  
    }

    
    cout << result<<endl;
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