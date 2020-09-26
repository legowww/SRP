#include "input.h"

using namespace std;

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
		inputUser(user);
		inputAi(ai);

		int winner = user - ai;
		getWin(winner);

		system("pause");
	}

	return 0;
}