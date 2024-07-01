#include <iostream>
using namespace std;


void deleter(char* str, char symbol) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != symbol) {
			cout << str[i];
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
	char str[] = "Hello world!";
	cout << "String before changes:\n";
	printStr(str);
	char symbol; cout << "\nEnter an symbol to delete:"; cin >> symbol;
	cout << "\nString after changes:\n";
	
	deleter(str, symbol);
	return 0;
}