#include <iostream>

using namespace std;

class Solution {
private:
	int num;
public:
	Solution(int num) {
		this->num = num;
	}

	void method(string parameter) {
		cout<<parameter<<"x"<<num<<endl;
	}
};

int main() {
	Solution obj(100);

	obj.method("Hello World!");

	return 0;
}