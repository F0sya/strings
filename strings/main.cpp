#include <iostream>
using namespace std;


void appender(char* str, int index, char symbol) {
	for (int i = strlen(str)-1; i > index; i--) {
		str[i] = str[i - 1];
	}
	str[index] = symbol;
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
	int index; cout << "\nEnter an index:"; cin >> index;
	char symbol; cout << "\nEnter an symbol to append:"; cin >> symbol;
	cout << "\nString after changes:\n";
	appender(str, index, symbol);
	printStr(str);
	return 0;
}