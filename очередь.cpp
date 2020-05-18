/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int Q, count = 0;
    cin >> Q;
    vector<int> queue;
    string command;
    int number;

    while (Q > 0) {
        cin >> command;

        if (command == "COME") {
            cin >> number;
            if (number >= 0) {
                queue.resize(queue.size() + number, false);
            }
            else {
                for (int i = 0; i < -number; i++) {
                    queue.pop_back();
                }
            }
        }
        if (command == "WORRY") {
            cin >> number;
            if (!queue[number]) {
                queue[number] = true;
            }
        }
        if (command == "QUIET") {
            cin >> number;
            if (queue[number]) {
                queue[number] = false;
            }
        }
        if (command == "WORRY_COUNT") {
            count = 0;
            for (auto el : queue) {
                if (el) {
                    count++;
                }
            }
            cout << count;
        }

        Q--;
    }

    return 0;
}
*/