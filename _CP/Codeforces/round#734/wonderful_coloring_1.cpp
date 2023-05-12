#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n=s.size();
		//////////////

		unordered_map<char, int> m1;
		unordered_map<char, int> m2;

		for(int i=0; i<n; ++i) {
			if(m1[s[i]]==1) {
				m2[s[i]]=1;
			} else {
				m1[s[i]]=1;
			}
		}

		cout<<(m1.size()+m2.size())/2<<endl;
		/////////////
	}

	return 0;
}