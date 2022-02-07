#include<iostream>
#include<queue>
using namespace std;


void print(char n) {
	if (isalpha(n)) {
		int limit = int(n) - 96;
		cout << "\n";
		for (int i = 0; i < limit; ++i) {
			cout << char(97 + i) << " ";
		}
	}
	else {	}
}

int main() {
	queue<char> letters;
	char n;
	do {
		cout << "\nEnter(a-z):";
		cin >> n;
		letters.push(n);
	} while (isalpha(n));
	while (!letters.empty()) {
		char temp = letters.front();
		print(temp);
		letters.pop();
	}
}