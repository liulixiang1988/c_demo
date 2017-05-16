#include <cctype> //for std::toupper
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Please enter a string: ";
	string s{};
	cin >> s;

	for (auto c: s) {
		char u = toupper(c);
		cout << u;
	}
	cout << "\n";
	return 0;
}
