#include<iostream> 
#include<time.h> 

using namespace std;

int Login(int login, int arrlogin[], int a) {
	for (int i = 0; i < a; i++)
	{
		if (login == arrlogin[i])
			return i;
	}
	return -1;
}

int Parol(int parol, int arrparol[], int a, int loginer) {

	if (parol == arrparol[loginer]) {
		return loginer;
	}
	else {
		return -1;
	}
}

int Money(int host, int money) {
	cout << "\n************************************************\n";
	cout << "*           |           |             |        *\n";
	cout << "************************************************\n";
	int pati = 0;
	int a = 0;

	if (host == money) {
		for (; a < host - 50; pati++) {
			a = a + 50;
		}
		if (pati != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |      *****   ******      |\n";
			cout << "	 |      *       *    *      |\n";
			cout << "	 |       ****   *    *      |   " << "x" << pati << "\n";
			cout << "	 |           *  *    *      |\n";
			cout << "	 |      *****   ******      |\n";
			cout << "	 ****************************\n\n";
		}



		int twe = 0;
		for (; a < host - 20; twe++) {
			a = a + 20;
		}
		if (twe != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |      ******   ******     |\n";
			cout << "	 |          *    *    *     |\n";
			cout << "	 |         *     *    *     |   " << "x" << twe << "\n";
			cout << "	 |        *      *    *     |\n";
			cout << "	 |      ******   ******     |\n";
			cout << "	 ****************************\n\n";
		}


		int ten = 0;
		for (; a < host - 10; ten++) {
			a = a + 10;
		}
		if (ten != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |        **   ******       |\n";
			cout << "	 |       * *   *    *       |\n";
			cout << "	 |      *  *   *    *       |   " << "x" << ten << "\n";
			cout << "	 |         *   *    *       |\n";
			cout << "	 |         *   ******       |\n";
			cout << "	 ****************************\n\n";
		}


		int pat = 0;
		for (; a <= host - 5; pat++) {
			a = a + 5;
		}
		if (pat != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |          *****           |\n";
			cout << "	 |          *               |\n";
			cout << " 	 |           ****           |   " << "x" << pat << "\n";
			cout << "  	 |              *           |\n";
			cout << " 	 |          *****           |\n";
			cout << " 	 ****************************\n\n";
		}
		a += money;
	}
	if (host != money) {
		for (; a < host - 50; pati++) {
			a = a + 50;
		}
		if (pati != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |      *****   ******      |\n";
			cout << "	 |      *       *    *      |\n";
			cout << "	 |       ****   *    *      |   " << "x" << pati << "\n";
			cout << "	 |           *  *    *      |\n";
			cout << "	 |      *****   ******      |\n";
			cout << "	 ****************************\n\n";
		}



		int twe = 0;
		for (; a < host - 20; twe++) {
			a = a + 20;
		}
		if (twe != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |      ******   ******     |\n";
			cout << "	 |          *    *    *     |\n";
			cout << "	 |         *     *    *     |   " << "x" << twe << "\n";
			cout << "	 |        *      *    *     |\n";
			cout << "	 |      ******   ******     |\n";
			cout << "	 ****************************\n\n";
		}


		int ten = 0;
		for (; a < host - 10; ten++) {
			a = a + 10;
		}
		if (ten != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |        **   ******       |\n";
			cout << "	 |       * *   *    *       |\n";
			cout << "	 |      *  *   *    *       |   " << "x" << ten << "\n";
			cout << "	 |         *   *    *       |\n";
			cout << "	 |         *   ******       |\n";
			cout << "	 ****************************\n\n";
		}


		int pat = 0;
		for (; a <= host - 5; pat++) {
			a = a + 5;
		}
		if (pat != 0) {

			cout << "	 \n         **************************** \n";
			cout << "	 |          *****           |\n";
			cout << "	 |          *               |\n";
			cout << " 	 |           ****           |   " << "x" << pat << "\n";
			cout << "  	 |              *           |\n";
			cout << " 	 |          *****           |\n";
			cout << " 	 ****************************\n\n";
		}
	}
	return -1;
}


void main() {
	setlocale(LC_ALL, "rus");

	cout << "               ********************************\n";
	cout << "               *  ��� ���������ߪ ����������  *\n";
	cout << "               ********************************\n\n";

	const int a = 3;
	int arrlogin[a];
	int arrparol[a];

	arrlogin[0] = 1;
	arrlogin[1] = 2;
	arrlogin[2] = 3;

	arrparol[0] = 1111;
	arrparol[1] = 2222;
	arrparol[2] = 3333;



	for (int money = 10000; money > 0;) {
		int login;
		int loginPos = -1;

		cout << "���i��: ";
		cin >> login;
		loginPos = Login(login, arrlogin, a);
		while (loginPos == -1)

		{

			cout << "\nH����������� ���i��\n";
			cout << "���i��: ";
			cin >> login;
			loginPos = Login(login, arrlogin, a);
			cout << "\n";
		}


		int parol;
		int prol = -1;
		cout << "������: ";
		cin >> parol;
		prol = Parol(parol, arrparol, a, loginPos);
		while (prol == -1)
		{

			cout << "\nH����������� ������\n";
			cout << "������: ";
			cin >> parol;
			prol = Parol(parol, arrparol, a, loginPos);

		}


		cout << "\n    �I����� ���������� " << login << "\n\n";


		int usehost;
		do {

			cout << "����i�� ����: ";
			cin >> usehost;

			if (money >= usehost) {
				if (usehost % 5 == 0) {
					Money(usehost, money);
					system("pause");
					cout << "\n____________________________________________________________\n\n\n";
					money -= usehost;
				}
				else {
					cout << "\nC��� ������� ���� ������� �'���\n";
					usehost = -1;
				}
			}
			else {
				cout << "���� �� ������ ������������ " << money << " ���.\n";
				usehost = -1;

			}




		} while (usehost == -1);
	}

	cout << "		�������� ��������� �� ������.\n                   ������� �� ����������i\n\n\n\n";

	cout << "\n____________________________________________________________\n\n\n";
	system("pause");
}