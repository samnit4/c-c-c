/*
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

void Add(map<string, set<string>>& fullsp, string sl1, string sl2) {
	fullsp[sl1].insert(sl2);
	fullsp[sl2].insert(sl1);
}

void Count(map<string, set<string>> fullsp, string sl1) {
	set<string>a = fullsp[sl1];
	int kol_vo = a.size();
	cout << kol_vo << endl;
}

void Check(map<string, set<string>>& fullsp, string sl1, string sl2) {
	if (fullsp[sl1].count(sl2))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	map<string, set<string>>fullsp;
	string sl1, sl2, command;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "ADD") {
			cin >> sl1 >> sl2;
			Add(fullsp, sl1, sl2);
		}
		else if (command == "CHECK") {
			cin >> sl1 >> sl2;
			Check(fullsp, sl1, sl2);
		}
		else if (command == "COUNT") {
			cin >> sl1;
			Count (fullsp, sl1);
		}
	}
	return 0;
}
*/