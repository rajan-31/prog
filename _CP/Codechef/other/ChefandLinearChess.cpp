#include <iostream>
#include <vector>
using namespace std;

int can_cap(int target, vector<int>* nums){
    int ans=-1;
    for(auto itr: *nums){
        if(target %itr==0 && itr>ans){
            ans=itr;
        }
    }
    return ans;
}

int main(){
    // freopen("input1.txt","r",stdin);
    int n,i,j,target,ln,temp;
    vector<int> nums;

    cin>>n;
    for(i=0; i<n ;i++){
        cin >> ln;
        cin >> target;
        for(j=0; j<ln; j++){
            cin >> temp;
            if(temp<target){
                nums.push_back(temp);
            }
        }
        cout<<can_cap(target, &nums)<<endl;
        nums.clear();
    }
}