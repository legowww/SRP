#pragma once
#include "input.h"

using namespace std;

void inputUser(int& user)
{
	while (1)
	{
		system("cls");
		cout << "================================" << endl;
		cout << "\t���� ���� �� ����" << endl << endl;
		cout << "[1]. ����\t[2]. ����\n[3]. ��\t\t[4]. ����" << endl;
		cout << "================================" << endl;
		cout << "[1] ~ [4] �޴��� �ϳ��� �����Ͻÿ� : ";

		cin >> user;
		cout << endl;

		if (cin.fail())
		{
			cout << "1~4 �ȿ��� �����Ͻÿ�" << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user < 1 || user > 4)
		{
			cout << "1~4 �ȿ��� �����Ͻÿ�" << endl;
			system("pause");
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		if (user == SRP::end)
		{
			cout << "���α׷� ����";
			exit(1);
		}

		break;
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

void inputAi2(int& ai)
{
	srand(time(0));

	int a = (rand() % 3) + 1;
	ai = a;

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