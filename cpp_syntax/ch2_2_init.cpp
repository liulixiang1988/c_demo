#include <iostream> //std::cin, std::cout
using namespace std;

int main(int argc, char const *argv[])
{
	cout << " a = ? ";
	int a{};
	cin >> a;

	cout << " b = ? ";
	int b{};
	cin >> b;

	cout << '\n';
	cout << " a + b = " << (a + b) << '\n';
	cout << " a - b = " << (a - b) << '\n';
	cout << " a * b = " << (a * b) << '\n';
	cout << " a / b = " << (a / b) << '\n';
	cout << " a % b = " << (a % b) << '\n';
	return 0;
}