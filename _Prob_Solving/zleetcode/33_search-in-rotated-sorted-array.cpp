// see cp sheet
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0, hi=n-1;
        
        // binary search to find smallest
        while(lo<hi) {
            int mid = (lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
        
        int rot=lo;
        lo=0, hi=n-1;

        while(lo<=hi) {
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;    // imp

            if(nums[realmid]==target) return realmid;

            if(nums[realmid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> nums={4,5,6,7,0,1,2};
    int target = 0;

    cout<<obj.search(nums, target)<<endl;
}