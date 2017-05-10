#include <iostream>
#include <random>

using namespace std;

int main(int argc, char const *argv[])
{
	//1.种子
	random_device seed{};

	//2.随机数发生器 random number generator
	mt19937 engine{seed()};

	//3. 均匀分布 uniformly ditribute 从[1..10]
	uniform_int_distribution<> dis{1, 10};

	//4. 产生随机正数
	int x{ dis(engine)};

	cout << x << "\n";
	return 0;
}