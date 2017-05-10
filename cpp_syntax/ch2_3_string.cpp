#include <iostream> //std::cin, std::cout
#include <string> //std::string

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "What's your name?";
	string name{};
	cin >> name;

	cout << '\n';
	cout << "Hi, " << name << "!\n";
	cout << "Nice to meet you! :-)\n";
	return 0;
}