#include "input.h"

using namespace std;

int main()
{
	while (1)
	{
		int user, ai;
		inputUser(user);
		inputAi2(ai);

		int winner = user - ai;
		getWin(winner);

		system("pause");
	}

	return 0;
}