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
	int x,y=1,z,num;
	cout << "ENTER THE NUMBER" << endl;
	cin >> num;
	for (int x = 1; x <= num; x++)
	{
		cout << x << "!=";
		y = y*x;
		for (int z = 1; z <= x; z++)
		{
			cout << z;
			if (z != x)
			{
				cout << "*";
			}
		}
		cout << "=" << y;
		cout << endl;
	}
}
