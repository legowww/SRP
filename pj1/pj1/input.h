#pragma once
#include <iostream>
#include <random>
#include <time.h>

enum SRP
{
	sicssors = 1,
	rock = 2,
	paper = 3,
	end
};

void inputUser(int& user);
void inputAi(int& ai);
void inputAi2(int& ai);
void getWin(const int& winner);
