/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Worry (vector<int>& ocher, int x){
	ocher[x] = 1;
}
void Quiet(vector<int>& ocher, int x) {
	ocher[x] = 0;
}
void Come(vector<int>& ocher, int x) {
    if (x >= 0) {
        ocher.resize(ocher.size() + x, 0);
    }
    else {
        for (int i = 0; i < -x; i++) {
            ocher.pop_back();
        }
    }
}
void Worry_count(vector<int>& ocher) {
    int count = 0;
    for (auto el : ocher) {
        if (el==1) {
            count++;
        }
    }
    cout << count<< endl;
}

int main() {
    int i = 0;//счетчик
    vector<int> ocher;// ктор с очередью
    string command;//команды
    int n;// кол0во команд
    int x;
    cin >> n;
    while (i < n) {
        i++;
        cin >> command;
        if (command == "WORRY") {
            cin >> x;
            Worry(ocher, x);
        }
        if (command == "QUIET") {
            cin >> x;
            Quiet(ocher, x);
        }
        if (command == "COME") {
            cin >> x;
            Come(ocher, x);
        }
        if (command == "WORRY_COUNT") {
            Worry_count(ocher);
        }
    }
    return 0;
}
*/