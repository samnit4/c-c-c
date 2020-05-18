/*#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool IsPalindrom(string S) {
	int sizeS = S.size();
	int schet = 0;
	for (int i = 0; i < sizeS / 2; i++) {
		if (S[i] == S[sizeS - 1 - i])
			schet += 1;
		else
			return false;
	}
	if (schet == sizeS / 2)
		return true;
}


vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> result;
	for (auto slovo : words) {
		int sizeS = slovo.size();
		if (sizeS >= minLength) {
			if (IsPalindrom(slovo) == true)
				result.emplace_back(slovo);
		}
	}
	return result;
}

int main() {
	vector<string> aaa =PalindromFilter({ "abacaba", "aba"}, 2);
	string n = "";
	for (auto w:aaa){
		n = n + w + ", ";
	}
	int si = n.size()-1;
	n.erase(si, 1);
	si = n.size() - 1;
	n.erase(si, 1);
	cout << n;
	return 0;
}*/