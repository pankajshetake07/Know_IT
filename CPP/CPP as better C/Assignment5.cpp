#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int stringLength(char str[]) {
	int length=0,i=0;
	while (str[i] != '\0') {
		length++;
		str++;
	}
	return length;
}

void stringReverse(char str[]) {
	char ch;
	for (int i = 0, j = stringLength(str) - 1 ; i < j; i++, j--) {
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	cout << "\n\n\tReverse String is : " << str<<endl;
}

bool isAlpha(char str) {
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')) {
		return true;		}
	return false;
}

int numberOfCharacters(char str[]) {
	int count=0;
	for (int i = 0; i < str[i] != '\0'; i++) {
		if (isAlpha(str[i])) {
			count++;
		}
	}
	return count;
}

bool isDigit(char ch) {
	if (ch >= 48 && ch <= 56) {
		return true;
	}
	return false;
}

int numberOfDigits(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i] != '\0'; i++) {
		if (isDigit(str[i])) {
			count++;
		}
	}
	return count;
}

bool isPalindrome(char str[]) {
	for (int i = 0, j = stringLength(str) - 1 ; i < j; i++, j--) {
		if (str[i] != str[j]) {
			return false;
		}
	}
	return true;
}

int countVowels(char str[]) {
	int count = 0;
	for (int i = 0; i < str[i] != '\0'; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			count++;
		}
	}
	return count++;
}

int main() {
	char str[40];
	cout << "\n\n\n\tEnter any string : ";
	cin >> str;
	cout << "\n\tString length is : "<<stringLength(str);
	stringReverse(str);
	cout << "\n\tNumber of Characters is : " << numberOfCharacters(str)<<endl<<endl;
	cout << "\n\tNumber of Digits is : " << numberOfDigits(str) << endl << endl;
	if (isPalindrome(str)) {
		cout << "\n\tString is palindrome"<<endl<<endl;
	}
	else {
		cout << "\n\tString is not palindrome" << endl << endl;
	}
	cout << "\n\tNumber of Vowels is : " << countVowels(str) << endl << endl;
}