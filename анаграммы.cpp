
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<char, int> BuildCharCounters(const string& word) {
	map<char, int> counters;
	for (char c : word) {
		++counters[c];
	}
	return counters;
}

void Annagram(map<char, int>& sl1, map<char, int>& sl2) {
	if (sl1 == sl2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	int n;
	cin >> n;
	string sl1, sl2;
	map<char, int>sl11;
	map<char, int>sl22;
	for (int i = 0; i < n; i++) {
		cin >> sl1 >> sl2;
		map<char, int>sl11 = BuildCharCounters(sl1);
		map<char, int>sl22 = BuildCharCounters(sl2);
		Annagram(sl11, sl22);
	}
	return 0;
}
