
#include <iostream>
#include<map>
#include<vector>
#include<string>
#include<set>
using namespace std;
/*
//map<nomer, spisok ostanovok>buses  
//vector<string> bus_seq;

void All_buses(map<string, vector<string>>& buses) {
	if (buses.size())
	{
		for (const auto& i : buses)
		{
			cout << "Bus " << i.first << ": ";
			for (const auto t : i.second)
				cout << t << " ";
			cout << "\n";
		}
	}
	else
		cout << "No buses" << endl;
}

void Stops_for_bus(vector<string>& bus_seq, string& ostanovka, map<string, vector<string>>& buses) {
	bool bus_na_ostanovka = false;
	int bus_seq_kol_vo = bus_seq.size();
	for ( int i = 0; i < bus_seq_kol_vo; i++)
	{
		if (bus_seq[i] == ostanovka)
		{
			bus_na_ostanovka = true;
			break;
		}
	}
	if (bus_na_ostanovka)
	{
		vector<string> stops = buses[ostanovka];
		vector<string> search;
		for (const auto& t : stops)
		{
			cout << "Stop " << t << ": ";
			bool nashel = false;
			for (int j = 0; j < bus_seq_kol_vo; ++j)
			{
				if (bus_seq[j] != ostanovka)
				{
					search = buses[bus_seq[j]];
					int kol_vo = search.size();
					for (int k = 0; k < kol_vo; k++)
					{
						if (search[k] == t)
						{
							nashel = true;
							cout << bus_seq[j] << " ";
							break;
						}
					}
				}
			}
			if (!nashel)
			{
				cout << "no interchange";
			}
			cout << "\n";
		}
	}
	else
		cout << "No bus" << endl;
}

void Buses_for_stop(vector<string>& bus_seq, map<string, vector<string>>& buses, string& ostanovka) {
	const auto kol_vo = bus_seq.size();
	bool nashel = false;
	for (int i = 0; i < kol_vo; ++i)
	{
		for (const auto& j : buses[bus_seq[i]])
		{
			if (j == ostanovka)
			{
				nashel = true;
				cout << bus_seq[i] << " ";
			}
		}
	}
	if (!nashel)
		cout << "No stop";
	cout << "\n";
}

void New_bus(string& ostanovka, vector<string>& bus_seq, map<string, vector<string>>& buses, int stop_count) {
	string new_ostanovka;
	bus_seq.push_back(ostanovka);
	while (stop_count)
	{
		cin >> new_ostanovka;
		buses[ostanovka].push_back(new_ostanovka);
		--stop_count;
	}
}

int main() {
	int n;
	int stop_count;
	string command;
	string ostanovka;
	vector<string> bus_seq;
	map<string, vector<string>> buses;
	cin >> n;
	for (int i=0; i < n; i++) {
		cin >> command;
		if (command == "ALL_BUSES") {
			All_buses(buses);
		}
		else {
			cin >> ostanovka;
			if (command == "STOPS_FOR_BUS") {
				Stops_for_bus(bus_seq, ostanovka, buses);
			}
			else if (command == "BUSES_FOR_STOP") {
				Buses_for_stop(bus_seq, buses, ostanovka);
			}
			else if (command == "NEW_BUS") {
				cin >> stop_count;
				New_bus(ostanovka, bus_seq, buses, stop_count);
			}
		}
	}
	return 0;
}
*/


