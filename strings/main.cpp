#include <iostream>
using namespace std;


int counter(char* str, char symbol) {
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == symbol) {
			count++;
		}
	}
	return count;
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
	char symbol; cout << "\nEnter an symbol to count:"; cin >> symbol;
	cout << "\nString after changes:\n";

	int count = counter(str, symbol);
	cout << "Amount of this symbol in string:\n" << count << endl;
	return 0;
}