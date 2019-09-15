//Day 1


#include<iostream>
using namespace std;

void table(int num)
{
	for(int i = 1; i<=10; i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<"\n";
	}
}

int main()
{
	int num;
	cout<<"Enter the number to get table: ";
	cin>>num;
	cout<<"Table of "<<num<<" is: \n";
	table(num);
	return 0;
}
