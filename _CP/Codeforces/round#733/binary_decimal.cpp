#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long giveMax(long long num) {
	string str = to_string(num);
	int len = str.length();

	string max;
	
	for(int i=0; i<len; ++i) {
		if(str[i]=='0')
			max+="0";
		else
			max+="1";
	}

	// cout<<num<<"::"<<max<<endl;
	return stoi(max);
}

int ans(long long num) {
	// if(num%10==0) return 1;
	int ans=0;

	while(true) {
		num-=giveMax(num);
		++ans;

		if(num<=0)
			break;
		// if(num%10==0){
		// 	++ans;
		// 	break;
		// }
	}
	return ans;
}

int main() {
	long t;
	cin>>t;

	while(t--) {
		long long num;
		cin>>num;

		cout<<ans(num)<<endl;
	}
}