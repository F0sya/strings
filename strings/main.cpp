#include <iostream>
using namespace std;


void space_to_tab(char* str) {
	int i = 0;
	do {
		if (str[i] == ' ') {
			str[i] = '\t';
		}
		i++;
	} while (str[i] != '\0');
}
void printStr(char* str) {
	int i = 0;
	do {
		cout << str[i];
		i++;
	} while (str[i] != '\0');
}

int main() {
	char str[] = "Hello world!";
	cout << "String before changes:\n";
	printStr(str);
	cout << "\nString after changes:\n";
	space_to_tab(str);
	printStr(str);
	return 0;
}