/*
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	map<set<string>, int> buses;
	int n;
	int nomer = 0;
	set<string> ostanovki;
	string ostanovka;
	int kol_vo;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> kol_vo;
		for (int k = 0; k < kol_vo; k++) {
			cin >> ostanovka;
			ostanovki.insert(ostanovka);
		}
		if (buses.count(ostanovki))
			cout << "Already exists for " << buses[ostanovki] << endl;
		else {
			nomer++;
			buses[ostanovki] = nomer;
			cout << "New bus " << nomer<< endl;
		}
		ostanovki.clear();
	}
	return 0;
}
*/