#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(0); cin.tie(0)
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



int solve(){

    int n,k;
    cin>>n,k;
    int arr[n];
    for(int i =0;i<n;i++)
    cin>>arr[i];

    int answer = 0;

	// Use hashset of strings to handle duplicate case of subarrays
	unordered_set<string> hashSet;

	// Run two nested loops and generate all subarrays
	for (int i = 0; i < n; i++)
	{
		// Declare variable to count total number of current odd elements
		int currentOdd = 0;

		// Declare variable to store elements of current subarray
		string currentSubArray;

		// Iterate through all subarrays starting from index i
		for (int j = i; j < n; j++)
		{
			// Check if current element is odd then increment count
			// Of current odd elements by 1
			if (arr[j] % 2 == 1) {
				currentOdd++;
			}
			// If current odd elements are greater than k then break loop
			if (currentOdd > k) {
				break;
			}
			// Add element to current subarray
			string element = to_string(arr[j]);
			for (char c : element) {
				currentSubArray.push_back(c);
			}
			currentSubArray.push_back(' ');

			// If current subarray doesnot exist in hashset then insert
			// Current subarray to hashset and increment answer by 1
			if (hashSet.find(currentSubArray) == hashSet.end()) {
				hashSet.insert(currentSubArray);
				answer += 1;
			}
		}
	}

	// Return the answer
	return answer;
}

int main(){
 
   cout<< solve();
    return 0;
}