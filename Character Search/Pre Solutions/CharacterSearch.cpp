#include <iostream>
#include <algorithm> 
#include<cmath>
#include<fstream>
#include <string> 
#include <cctype>
#include <cctype>
#include <cctype>
#include <cctype>
#include <cctype>
#include <cctype>

using namespace std;

string lower(string str);
string find_unique_character(string str);

int main() {
	string result = find_unique_character("PopularStar");
	cout << result << endl;
}

static string find_unique_character(string str) 
{	
	string chars = lower(str);
	string copies;

	int size = chars.size();
	int frequency;
	char current;

	for (int target_index = 0; target_index < size; ++target_index) {
		frequency = 0;
		current = chars.at(target_index);

		int index = copies.find(current);

		if (index >= 0) {
		    continue;
		}

		for (int next = target_index + 1; next < size; ++next) {
		     if (current == chars.at(next)) {
			 copies += current;
			 ++frequency;
		         break;
		     }
		}
		
		if (frequency < 1) {
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
