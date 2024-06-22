#include <iostream>
using namespace std;


void deleter(char* str, int index) {
	char new_str[] = "";
	for (int i = index; i < strlen(str); i++) {
		str[i] = str[i + 1];
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
	int index; cout << "\nEnter an index to delete:"; cin >> index;
	cout << "\nString after changes:\n";
	deleter(str, index);
	printStr(str);
	return 0;
}