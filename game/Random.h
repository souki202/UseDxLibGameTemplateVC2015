#pragma once
#include <random>

class Random {
public:
	Random();
	~Random();
	int Generate(int min, int max);	//[min, max]	負数対応 max < minは想定していないので注意
private:
	static std::random_device rnd;
	static std::mt19937 mt;

	int offset;
};