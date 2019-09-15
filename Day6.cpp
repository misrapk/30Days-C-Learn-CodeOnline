#include<iostream>
using namespace std;
int main()
{
	int f,u,o,n,rem;
	cout<<"Free Bytes: ";
	cin>>f;
	cout<<"Used Bytes: ";
	cin>>u;
	cout<<"Bytes you want to delete: ";
	cin>>o;
	cout<<"New file size: ";
	cin>>n;
	
	//remaining bytes after deletion
	rem = f + o - n;
	cout<<"Remaining Free BYtes: "<<rem;
	return 0;
}
