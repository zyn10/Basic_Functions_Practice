#include <iostream>
using namespace std;
void AREA();
int main()
{
	AREA();
	system("pause");
	return 0;
}
void AREA()
{
	int num1,num2;
	cout<<"ENTER THE LENGTH OF  RECTANGLE"<<endl;
	cin>> num1;
		cout<<"ENTER THE WIGTH OF  RECTANGLE"<<endl;
		cin>>num2;
	int area = num1*num2;
	cout<<"THE AREA OF RECTANGLE="<< area <<endl;
return 0;
}
