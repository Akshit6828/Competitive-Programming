#include <bits/stdc++.h>
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define ll long long
#define deb(x) cout << #x << " = " << x << "\n"
#define vi vector<int>

/*
Corner Case:
XYZ -- XXYYZ
AAA -- AAA
BBAB -- BBAAB
BBABB -
*/

void testCase(string &s, int index, string result, stack<string> &st){
    if (index == s.size()){
        if (st.empty())
            st.push(result);
        else
        {
            if (st.top() > result){
                st.pop();
                st.push(result);
            }
        }
        return;
    }

    result += s[index];
    testCase(s, index + 1, result + s[index], st);
    testCase(s, index + 1, result, st);
}


int main()
{
    boost;
    int c = 1;
    int t;
    cin >> t;
    while (t--){
        stack<string> s;
        string input, ans="";
        cin>>input;
        testCase(input,0,ans,s);
        cout << "Case #" << c++ << ": ";
        cout<<s.top()<<endl;
    }
    return 0;
}