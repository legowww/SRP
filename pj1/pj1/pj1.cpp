#include <iostream>
#include <random>

using namespace std;

enum SRP
{
	sicssors = 1,
	rock = 2,
	paper = 3,
	end
};

int main()
{
	while (1)
	{
		system("cls");
		cout << "================================" << endl;
		cout << "\t가위 바위 보 게임" << endl << endl;
		cout << "[1]. 가위\t[2]. 바위\n[3]. 보\t\t[4]. 종료" << endl;
		cout << "================================" << endl;
		cout << "[1] ~ [4] 메뉴중 하나를 선택하시오 : ";

		int user, ai;

		cin >> user;
		cout << endl;

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

		int winner = user - ai;

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

		system("pause");
	}

	return 0;
}