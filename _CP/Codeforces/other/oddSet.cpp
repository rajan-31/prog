#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void isGood(int n, vector<int> nums) {
	int odd=0, even=0;
	for(auto itr: nums) {
		if(itr%2==0) ++even;
		else ++odd;
		// cout<<itr<<","<<itr%2<<"\t";
	}
	if(even==odd) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int main() {
	int nn;
	cin>>nn;

	while(nn>0) {
		--nn;
		int n;
		cin>>n;
		vector<int> nums;
		// cout<<"nn:"<<nn<<","<<"n:"<<n<<"\t";
		for(int i=0; i<2*n; i++){
			int temp;
			cin>>temp;
			nums.push_back(temp);
		}
		isGood(n, nums);
	}
}