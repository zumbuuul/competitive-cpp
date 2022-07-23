//https://www.codewars.com/kata/5513795bd3fafb56c200049e

#include <iostream>
#include <vector>
using namespace std;

vector<int> countBy(int x, int n) {
	vector<int> results;
	int add = 0;
	for (int i = 1; i <= n; i++) {
		results.push_back(x + add);
		add += x;
	}
	return results;
}

int main() {
	vector<int> result = countBy(10,20);
	
	for (int i = 0; i < 20; i++) {
		cout << result[i] << endl;
	}
}

