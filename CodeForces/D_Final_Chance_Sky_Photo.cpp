#include <bits/stdc++.h>

using namespace std;

// function to find the longest subarray
// with sum divisible by k
int longestSubarrWthSumDivByK(int arr[], int n, int k)
{
	// unordered map 'um' implemented as
	// hash table
	unordered_map<int, int> um;

	int max_len = 0;
	int curr_sum = 0;

	for (int i = 0; i < n; i++) {
		curr_sum += arr[i];

		int mod = ((curr_sum % k) + k) % k;

		// if true then sum(0..i) is divisible
		// by k
		if (mod == 0)
			// update 'max_len'
			max_len = i + 1;

		// if value 'mod_arr[i]' not present in 'um'
		// then store it in 'um' with index of its
		// first occurrence
		else if (um.find(mod) == um.end())
			um[mod] = i;

		else
			// if true, then update 'max_len'
			if (max_len < (i - um[mod]))
			max_len = i - um[mod];
	}

	// return the required length of longest subarray with
	// sum divisible by 'k'
	return max_len;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
    cin >>n;
    int arr[n];
    for(int i =0;i<n;i++)cin>>arr[i];
	int k = 1e9;
	if(longestSubarrWthSumDivByK(arr, n, k) ==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
	return 0;
}

// Code Updated by Kshitij Dwivedi