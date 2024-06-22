#include <iostream>
using namespace std;



int main() {
	char str[] = "HEllo world! world";
	int words = 0;

	int length = strlen(str);
	
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ') {
			words++;
		}
	}
	words++;
	cout << "Amount of words: " << words << endl;
	return 0;
}