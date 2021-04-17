#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int num = 1000;
	while (num >= 6)
	{
		cout <<"\t"<<num<< endl;
		num = num - 7;
		Sleep(40);
	}
	if (num==6)
	{
		cout << "\nЯ.... гуль" << endl;
	}
	return 0;
}