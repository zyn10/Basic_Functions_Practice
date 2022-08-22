#include<iostream>
usingnamespacestd;
int Print();
int main()
{
	Print();
	system("pause");
	return 0;
}
int Print(void)

{
	int x;
	for (x=1; x < 35; x++)
		cout<<"*";
	cout<<endl;
	return x;
}
