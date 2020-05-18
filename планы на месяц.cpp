/*
#include<iostream>
#include<string>
#include<vector>
#include <sstream>
using namespace std;

string IntToString(int a)
{
	ostringstream temp;
	temp << a;
	return temp.str();
}

void VuvodVect(vector<string>m) {
	int si = m.size();
	string sis = IntToString(si);
	string n = sis + " ";
	for (auto w : m) {
		n = n + w + " ";
	}
	cout << n<< endl;
}

void Add(string s, int i, vector<vector<string>>& m) {
	m[i-1].push_back(s);
}

void Dump(int i, vector<vector<string>>& m) {
	VuvodVect(m[i - 1]);
}

void Next(const vector<int>& days_of_month, int& day_of_month, vector<vector<string>>& m) {
	vector<vector<string>> cont = m;
	if (++day_of_month > 11)
		day_of_month = 0;
	m.resize(days_of_month[day_of_month]);
	if (m.size() < cont.size())
	{
		for (int i = m.size(); i < cont.size(); i++)
		{
			m[m.size() - 1].insert(end(m[m.size() - 1]), begin(cont[i]), end(cont[i]));
		}
	}
}
int main() {
	int day_of_month = 0;
	string command;
	const vector<int> days_of_month = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };// дни мес€цев
	vector<vector<string>> m(days_of_month[day_of_month]);// активный мес€ц
	int t;
	cin >> t; // кол-во команд
	for (int i = 0; i < t; i++) {
		cin >> command;
		if (command == "ADD") {
			int i;
			string s;
			cin >> i >> s;
			Add(s, i, m);
		}
		if (command == "NEXT") {
			Next(days_of_month, day_of_month, m);
		}
		if (command == "DUMP") {
			int i;
			cin >> i;
			Dump(i, m);
		}
	}
}
*/