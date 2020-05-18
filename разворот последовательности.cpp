/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Reverse(vector<int>& v) {
	int sizeV = v.size();
	vector<int> t = v;
	v.clear();
	for (int i = sizeV-1; i >= 0; i--)
	{
		v.push_back(t[i]);
	}
}

int main() {
	vector<int> numbers = { "1", "5", "3", "4", "2" };
	Reverse(numbers);
}
*/