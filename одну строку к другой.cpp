/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
	destination.reserve(destination.size() + source.size());
	destination.insert(destination.end(), source.begin(), source.end());
	source.clear();
}



int main() {
	string n = "";
	vector<string> source = { "a", "b", "c" };
	vector<string> destination = { "z" };
	MoveStrings(source, destination);
	for (auto w : destination) {
		n = n + w + ", ";
	}
	int si = n.size() - 1;
	n.erase(si, 1);
	si = n.size() - 1;
	n.erase(si, 1);
	cout << n;
}
*/