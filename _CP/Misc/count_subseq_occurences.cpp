#include<iostream>
#include<string>

using namespace std;

int countSubSeq(string str, string seq, int m, int n) {
	if( (m==0 && n==0) || n==0)
		return 1;
	else if(m==0)
		return 0;
	else if(str[m-1] == seq[n-1])
		return countSubSeq(str, seq, m-1, n-1) + countSubSeq(str, seq, m-1, n);
	else
		return countSubSeq(str, seq, m-1, n);

}

int main() {
	string str = "aabbcc";
	string seq = "abc";

	cout<<countSubSeq(str, seq, str.size(), seq.size())<<endl;
}
