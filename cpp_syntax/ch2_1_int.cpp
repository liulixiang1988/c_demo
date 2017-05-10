#include <iostream> //For std::cout
#include <limits> //For std::numeric_limits

using namespace std;

int main(int argc, char const *argv[])
{
	cout << " int type\n";
	cout << "----------\n";
	cout << " Size: " << sizeof(int) << "bytes\n";
	cout << " Max: " << numeric_limits<int>::max() << "\n";
	cout << " Min: " << numeric_limits<int>::min() << "\n";
	return 0;
}