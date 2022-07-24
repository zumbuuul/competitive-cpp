//https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findOdd(std::vector<int> nums) {
	int first=0, el=nums[0];
	
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != el) {
			if (first % 2 != 0) {
				return el;
			}
			first = 0;
			el = nums[i];
		}
		first++;
	}	

	return nums[nums.size() - 1];
}

int main() {
	std::vector<int> brojevi = {2,2,2,2,3,3,10};
	cout << findOdd(brojevi);
}