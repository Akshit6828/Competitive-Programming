#include<bits/stdc++.h>
#include <string>
using namespace std;

int countOccurenceOfSubstring(string str, string pattern){
    int count = 0;
	int pos = str.find(pattern, 0); 

	while (pos != string::npos)
	{
		count++;
		pos = str.find(pattern, pos + 1);
	}

    return count;
}


void solve(){

    string str;
    cin>> str;
    string c1 = "fm";
    string c2 = "mf";

    int count1 = countOccurenceOfSubstring(str,c1);
    int count2 = countOccurenceOfSubstring(str,c2);

    cout<<max(count1,count2)<<endl;
}

int main(){
    solve();
    return 0;
}