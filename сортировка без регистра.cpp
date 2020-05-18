/*
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class SortPredicate {
public:

    bool operator()(const std::string& lhs, const std::string& rhs) const {
        string lhcLower(lhs);
        string rhcLower(rhs);
        transform(lhs.begin(), lhs.end(), lhcLower.begin(), ::tolower);
        transform(rhs.begin(), rhs.end(), rhcLower.begin(), ::tolower);
        return lhcLower < rhcLower;
    }
};

int main(int argc, const char* argv[]) {
    int n;
    cin >> n;
    string chislo;
    vector<string> stroka;
    for (int i = 0; i < n; i++) {
        cin >> chislo;
        stroka.push_back(chislo);
    }
    sort(stroka.begin(), stroka.end(), SortPredicate());

    for (const string& item : stroka) {
        cout << item << endl;
    }
    return 0;
}
*/