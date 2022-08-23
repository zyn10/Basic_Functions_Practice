#include<iostream>
using namespace std;
void Print();
int main()
{
	Print();
	system("pause");
	return 0;
}
void Print()
{
	int num1, num2, i,gcd;
	cout << "ENTER TWO NUMBERS" << endl;
	cin >> num1>>num2;
	for (i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1%i == 0 && num2%i == 0)
			gcd = i;
	}
	cout << "G C D of numbers is=" << gcd;
}
