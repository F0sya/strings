#include <iostream>
using namespace std;


void counter(char* str) {
	int i = 0;
	int letters = 0, numbers = 0, others = 0;
	do {
		if (str[i] >= '0' && str[i] <= '9') {
			numbers++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
			letters++;
		}
		else {
			others++;
		}
		i++;
	} while (str[i] != '\0');
	cout << "\nLetters: " << letters <<
		"\nNumbers: " << numbers <<
		"\nOthers: " << others;
}
void printStr(char* str) {
	int i = 0;
	do {
		cout << str[i];
		i++;
	} while (str[i] != '\0');
}

int main() {
	char str[] = "HEllo world!123";
	cout << "Our string:\n";
	printStr(str);
	counter(str);
	return 0;
}