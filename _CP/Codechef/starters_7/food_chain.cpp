#include<bits/stdc++.h>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

#define endl "\n"
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

int main(){
	boost

	int tc;
	cin>>tc;

	while(tc--) {
		int e,k;
		cin>>e>>k;
		int c=0;
		while(e>0) {
			++c;
			e/=k;
		}

		cout<<c<<"\n";
	}

	return 0;
}