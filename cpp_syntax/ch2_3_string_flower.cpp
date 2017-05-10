#include <iostream> //std::cin, std::cout
#include <string> //std::string, std::getline

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Message? ";
	string message{};
	//读取字符串，不用cin是因为cin遇到第一个空格就算结束
	getline(cin, message);

	//使用同一个字符和长度进行初始化
	string flowLine(message.length() + 4, '*');

	cout << '\n';
	cout << flowLine << '\n';
	cout << "* " << message << " *\n";
	cout << flowLine << '\n';
	return 0;
}