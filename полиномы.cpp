/*#include <iostream>
using namespace std;

bool IsPalindrom(string S) {
	int sizeS = S.size();
	int schet = 0;
	for (int i = 0; i < sizeS/2; i++) {
		if (S[i] == S[sizeS - 1 - i])
			schet += 1;
		else
			return false;
	}
	if (schet == sizeS / 2)
		return true;
}

int main() {
	cout << IsPalindrom("x");
	return 0;
}*/