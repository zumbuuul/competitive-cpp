//https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp

#include <iostream>
#include <vector>
using namespace std;

int solution(int num) {
	int sum = 0;

	for (int i = 3; i < num; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}

int main() {
	int result = solution(10);
	
	cout << result;
}

