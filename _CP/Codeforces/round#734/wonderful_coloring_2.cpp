#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		vector<int> nums;

		for(int i=0; i<n; i++) {
			int temp;
			cin>>temp;
			nums.push_back(temp);
		}

		unordered_map<char, int> freq;
		int maxCount = n/k;
		vector<int> count(k+1, maxCount);
		vector<int> ans;
		
		for(int i=0; i<n; i++) {
			if(freq[nums[i]]<k)
				freq[nums[i]]++;
		}

		for(int i=0; i<maxCount*k; i++) {
			// if(freq[nums[i]]>0 && count[freq[nums[i]]]>0) {
			// 	ans.push_back(freq[nums[i]]);
			// 	freq[nums[i]]--;

			// 	count[freq[nums[i]]]--;
			// } else if(freq[nums[i]]>0 && count[freq[nums[i]]]<=0) {
			// 	freq[nums[i]]--;
			// 	i--;
			// 	continue;
			// } else {
			// 	ans.push_back(0);
			// }

			
		}

		for(int i=maxCount*k; i<n; i++) {
			ans.push_back(0);
		}

		////////////////

		for(int i=0; i<n; i++) {
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}