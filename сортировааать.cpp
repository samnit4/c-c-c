/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <iomanip>
using namespace std;

int Abs(int a) {
	if (a < 0)
		return a * (-1);
	else
		return a;
}

bool comp(int a, int b) {
	return Abs(a) < Abs(b);
}

int main() {
	int n;
	cin >> n;
	int chislo;
	vector<int> stroka;
	for (int i = 0; i < n; i++) {
		cin >> chislo;
		stroka.push_back(chislo);
	}
	sort(begin(stroka), end(stroka), comp);
	for (auto w : stroka)
		cout << w << " ";
	return 0;
}
*/