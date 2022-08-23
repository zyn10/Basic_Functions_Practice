#include<iostream>
usingnamespacestd;
void Print();
int main()
{
	Print();
	system("pause");
	return 0;
}
void Print()
{
	floatX,radian;
	const float PI = 3.1415927;
	cout<<"ENTER THE ANGLE IN DEGREE "<<endl;
	cin>> X;
	radian = X*PI / 180;
	cout<<"CONVERT ANGLE IN DEGREE INTO RADIAN="<< radian <<endl;
}
