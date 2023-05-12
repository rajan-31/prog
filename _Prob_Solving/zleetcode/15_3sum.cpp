#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    	int n = nums.size();
    	if(n < 3) return {};

    	vector<vector<int>> ans;

    	sort(nums.begin(), nums.end());		// imp

    	for(int i=0; i<n-2; ++i) {	// left last two elt for j, k
    		if(i==0 || nums[i] != nums[i-1]) {	// skip duplicate for i
    			int j=i+1, k=n-1;

    			//twoSum prob logic
    			while(j<k){
    				int sum = nums[i]+nums[j]+nums[k];
    				if(sum==0) {
    					ans.push_back({nums[i], nums[j], nums[k]});
    				
	    				while(j<k && nums[j] == nums[j+1]) j++;		// skip duplicate for j
	    				while(j<k && nums[k] == nums[k-1]) k--;		// skip duplicate for k
    					j++; k--;	// since we are checking next position in above two condition, 
    								// we are not going to next position so incremeting again
    				} 
    				else if (sum > 0) k--;		// sum is > means we need to smaller value so that comeback one 
    											// position from back side means smaller elt since values are sorted
                    else j++;	// sum is < means we need bigger number
    			}
    		}
    	}

        return ans;
    }
};

int main() {
	Solution obj;

	vector<int> in = {1,-1,-1,0} /*{-1,0,1,2,-1,-4}*/;

	vector<vector<int>> ans = obj.threeSum(in);
	// [[-1,-1,2],[-1,0,1]]

	for(auto elt:ans){
		for(auto inelt:elt)
			cout<<inelt<<"\t";
		cout<<endl;
	}
	return 0;
}