#pragma once
#include <random>
class RandomFunctions
{
public:
	
	_declspec(dllexport) int randomNumber(int x, int y);
	_declspec(dllexport) RandomFunctions();
	_declspec(dllexport) ~RandomFunctions();
};

