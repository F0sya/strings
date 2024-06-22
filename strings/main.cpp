#include <iostream>
using namespace std;

int main() {
	char str[] = "Hello olleH";
	bool checker = true;
	int last_index = strlen(str) - 1;
	for (int i = 0; i != last_index; i++) {
		if (str[i] != str[last_index]) {
			checker = false;
			break;
		}
		last_index--;
	}
	(checker == true) ? cout << "Palindrome" : cout << "Not palindrome";
	return 0;
}