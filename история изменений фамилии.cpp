/*
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        firstName[year] = first_name;
    }

    void ChangeLastName(int year, const string& last_name) {
        lastName[year] = last_name;
    }

    string GetFullName(int year) {
        bool imya = false;
        bool familia = false;
        string name, surname;
        int limit = firstName.begin()->first;
        for (int i = year; i >= limit; --i)
        {
            if (firstName.count(i))
            {
                name = firstName[i];
                imya = true;
                break;
            }
        }
        limit = lastName.begin()->first;
        for (int i = year; i >= limit; --i)
        {
            if (lastName.count(i))
            {
                surname = lastName[i];
                familia = true;
                break;
            }
        }
        if (imya && familia)
            return name + " " + surname;
        else if (imya)
            return name + " with unknown last name";
        else if (familia)
            return surname + " with unknown first name";
        else return "Incognito";
    }
private:
    map<int, string> firstName;
    map<int, string> lastName;
};
int main() {
    return 0;
}
*/