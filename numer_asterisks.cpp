#include<iostream>
usingnamespacestd;
void Print();
int main()
{
	Print();
	system("pause");
	return 0;
}
void Print(void)
{
	intnum;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>num;
	int x;
	for (x = 1; x <num; x++)
		cout<<"*";
	cout<<endl;
}
