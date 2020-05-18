/*
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n, i, k;
    string ostanovka;
    map<vector<string>, int> buses;
    cin >> n; 
    for (i=0; i<n; i++) {
        vector<string> sp_ostanovok;
        cin >> k;
        for (int t = 0; t < k; t++) {
            cin >> ostanovka;
            sp_ostanovok.push_back(ostanovka);
        }
        if (buses.count(sp_ostanovok)) {
            cout << "Already exists for " << buses[sp_ostanovok] << endl;
        }
        else {
            buses[sp_ostanovok];
            int p = buses.size();
            buses[sp_ostanovok] = p;
            cout << "New bus " << buses[sp_ostanovok] << endl;
        }
    }
    return 0;
}
*/