#include <iostream>
#include <string>

using namespace std;

int mian()
{
	string previous = "";
	string current;

	while(cin>>current) {
		if (previous == current) {
			cout << "repeated word:" << current << "\n";
		}
		previous = current;
	}

	return 0;
}