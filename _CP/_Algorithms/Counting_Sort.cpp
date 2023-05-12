#include <bits/stdc++.h>
using namespace std;

vector<int> Counting_Sort(vector<int> A, int n) {
	int max_elt = *max_element(A.begin(), A.end());
	vector<int> Aux ( max_elt+1, 0 );
	vector<int>	Ans (n);

	for(auto elt: A) Aux[elt]++;
	for(int i=1; i<max_elt+1; ++i) Aux[i] += Aux[i-1];


	// for(auto elt: A) {
	// 	Ans[ Aux[ elt ] - 1 ] = elt;
	// 	Aux[ elt ]--;
	// }

	// A - traversed from back to do stable sort
	for(auto elt=A.begin(); elt!=A.end(); ++elt) {
		Ans[ Aux[ *elt ] - 1 ] = *elt;
		Aux[ *elt ]--;
	}

	return Ans;
}

int main() {
	vector<int> A = {35, 17, 78, 41, 90, 12, 28, 57, 64, 83};
	for(auto elt: A) cout<<elt<<"\t"; cout<<endl;

	vector<int> Ans = Counting_Sort(A, A.size());

	for(auto elt: Ans) cout<<elt<<"\t";
	cout<<endl;

	sort(A.begin(), A.end()); cout<<"Answer is "<<((Ans == A) ? "Correct" : "Wrong")<<endl;
//
	return 0;
}
