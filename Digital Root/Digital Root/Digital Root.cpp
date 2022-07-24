//https://www.codewars.com/kata/541c8630095125aba6000c00

#include <iostream>

using namespace std;

int digital_root(int num) {
	int sum = 0;
	int res = num;
	while (res >= 10) {
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		num = sum;
		res = num;
		sum = 0;
		
	}
	return res;
}

int main() {
	cout << digital_root(992);
}