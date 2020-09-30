#pragma once
#include "input.h"

using namespace std;

void inputUser(int& user)
{
	while (1)
	{
		system("cls");
		cout << "================================" << endl;
		cout << "\t가위 바위 보 게임" << endl << endl;
		cout << "[1]. 가위\t[2]. 바위\n[3]. 보\t\t[4]. 종료" << endl;
		cout << "================================" << endl;
		cout << "[1] ~ [4] 메뉴중 하나를 선택하시오 : ";

		cin >> user;
		cout << endl;

		if (cin.fail())
		{
			cout << "1~4 안에서 선택하시오" << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user < 1 || user > 4)
		{
			cout << "1~4 안에서 선택하시오" << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user == SRP::end)
		{
			cout << "프로그램 종료";
			exit(1);
		}

		break;
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

void inputAi2(int& ai)
{
	srand(time(0));

	int a = (rand() % 3) + 1;
	ai = a;

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