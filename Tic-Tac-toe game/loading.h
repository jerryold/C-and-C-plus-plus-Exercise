#include<iostream>
#include<windows.h>

using namespace std;

void loadingBar()
{
	system("cls");
	system("color 0E");

	char a = 178, b = 220;
	cout << "\n\n\n\n";
	cout << "\n\n\n\n\t\t\t\t\tLoading...\n";
	cout << endl;
	cout << "\t\t\t\t\t";

	for (int i = 0; i < 26; i++)

		cout << a;

	cout << "\r";
	cout << "\t\t\t\t\t";
	for (int i = 0; i < 26; i++)
	{
		cout << b;
		Sleep(200);
	}

}

