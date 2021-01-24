#include <iostream>
#include <algorithm> 
#include <string> 
#include <cctype>
using namespace std;

string find_unique_character(string str);
string lower(string str);

int main() {
	string result = find_unique_character("Pinocchio");
	cout << result << endl;
}

static string find_unique_character(string str) {
	string chars = lower(str);
	int size = chars.size();
	char current;

	for (int target_index = 0; target_index < size; ++target_index) {
		current = chars.at(target_index);

		int first_index = chars.find_first_of(current);
		int last_index = chars.find_last_of(current);

		if (first_index == last_index) {
			return chars.substr(target_index, 1);
		}
	}

	return chars.append(" has no unique character");
}

static string lower(string str) {
	transform(str.begin(), str.end(), str.begin(), [](unsigned char ch) {
		return tolower(ch);
	});

	return str;
}