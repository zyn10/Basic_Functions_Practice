#include<iostream>
usingnamespacestd;
void Print(int, int);
int main()
{
	int x = 1, num;
	cout<<"ENTER A NUMBER"<<endl;
	cin>>num;
	Print(x, num);
	return 0;
}
void Print(intx, intnum)
{
	for (x = 1; x<num; x++)
		cout<<"*";
	cout<<endl;
	system("pause");
}
