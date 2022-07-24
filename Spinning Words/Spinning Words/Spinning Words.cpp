//https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;

using namespace std;

string spinWords(const string str) {
	std::vector<string> words;
	string word = "";
	char b;
	for (int i = 0; i <= str.length(); i++) {
		word += str[i];
		if (str[i] == 32 || str[i] == '\0') {
			words.push_back(word);
			word = "";
		}

	}

	for (int i = 0; i < words.size(); i++) {
		if (words[i].length() < 6) {

			word += words[i];
		}
		else {
			for (int j = 1; j <= words[i].length() / 2; j++) {
				b = words[i][j - 1];
				words[i][j - 1] = words[i][words[i].length() - j - 1];
				words[i][words[i].length() - j - 1] = b;
			}
			word += words[i];

		}
	}
	word.pop_back();
	return word;
}

int main() {
	int* ptr;
	int a = 10;
	ptr = &a;
	
	int arr[] = { 1,2,3 };
	

	string r = spinWords("HELLO WORLD HOW");
	cout << r;
	

}