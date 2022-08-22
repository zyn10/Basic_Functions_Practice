#include<iostream>
usingnamespacestd;
int Maximum(int, int, int);
int Maximum(intx, inty, intz)
{
	int max = x;
	if (y> max)
		max = y;
	if (z> max)
		max = z;
	return max;
}
int main()
{
	int x, y, z;
	cout<<"ENTER FIRST INT"<<endl;
	cin>> x;
	cout<<"ENTER SECOND INT"<<endl;
	cin>> y;
	cout<<"ENTER THIRD INT"<<endl;
	cin>> z;
	cout<< Maximum(x, y, z) <<endl;
	system("Pause");

}
