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
	const double PI = 3.1415927;
	int  radius, AREAOFCIRCLE, CIRCUMFERENCEOFCIRCLE;
	char chk,a,c;
	cout << "ENTER THE RADIUS" << endl;
	cin >> radius;
	cin >> chk;
		if (chk == 'a')
		{
			AREAOFCIRCLE = PI*radius*radius;
			cout << "area of circle" << AREAOFCIRCLE << endl;
		}
		else if(chk == 'c')
		{
			CIRCUMFERENCEOFCIRCLE = 2 * PI*radius;
			cout << "circumference of circle" << CIRCUMFERENCEOFCIRCLE << endl;
		}
		else
		{
			cout << "ENTER THE VALID CHAR !! " << endl;
		}
}





