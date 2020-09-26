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
			cout << "���α׷� ����";
			exit(1);
		}


		switch (user)
		{
		case SRP::sicssors:
			cout << "���� vs ";
			break;
		case SRP::rock:
			cout << "���� vs ";
			break;
		case SRP::paper:
			cout << "�� vs ";
			break;
		default:
			break;
		}
		// break 2����� ������ Ż��
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
		cout << "����" << endl;
		break;
	case SRP::rock:
		cout << "����" << endl;
		break;
	case SRP::paper:
		cout << "��" << endl;
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
		cout << "�����ϴ�" << endl;
		break;
	case 1:
	case -2:
		cout << "�¸��߽��ϴ�!!" << endl;
		break;
	default:
		cout << "�й��߽��ϴ�" << endl;
		break;
	}
}