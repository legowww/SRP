#pragma once
#include "input.h"

using namespace std;

void inputUser(int& user)
{
	cin >> user;
	cout << endl;

	while (1)
	{
		if (cin.fail())
		{
			system("cls");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user < 1 || user > 4)
		{
			system("cls");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user == SRP::end)
		{
			cout << "프로그램 종료";
			exit(1);
		}


		switch (user)
		{
		case SRP::sicssors:
			cout << "가위 vs ";
			break;
		case SRP::rock:
			cout << "바위 vs ";
			break;
		case SRP::paper:
			cout << "보 vs ";
			break;
		default:
			break;
		}
		// break 2번써야 완전히 탈출
		break;
	}
}

void inputAi(int& ai)
{
	random_device rd;
	mt19937 me(rd());
	uniform_int_distribution<> dice(1, 3);

	ai = dice(me);
	switch (ai)
	{
	case SRP::sicssors:
		cout << "가위" << endl;
		break;
	case SRP::rock:
		cout << "바위" << endl;
		break;
	case SRP::paper:
		cout << "보" << endl;
		break;
	default:
		break;
	}
	cout << endl;
}

void getWin(const int& winner)
{
	switch (winner)
	{
	case 0:
		cout << "비겼습니다" << endl;
		break;
	case 1:
	case -2:
		cout << "승리했습니다!!" << endl;
		break;
	default:
		cout << "패배했습니다" << endl;
		break;
	}
}