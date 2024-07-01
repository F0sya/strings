#include <iostream>
using namespace std;


void changer(char* str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '.') {
			str[i] = '!';
		}
	}
}
void printStr(char* str) {
	int i = 0;
	do {
		cout << str[i];
		i++;
	} while (str[i] != '\0');
}

int main() {
	char str[] = "Hello. world....";
	cout << "String before changes:\n";
	printStr(str);
	cout << "\nString after changes:\n";

	changer(str);
	printStr(str);
	return 0;
}