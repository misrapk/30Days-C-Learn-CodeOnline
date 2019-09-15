#include<iostream>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n;
	for (i =1; i<= n; i++)	
	{
//		if(i%2 != 0)
//		{ 
//		  k = i+1;
//		
//		}
//		else
//		{
//			k = i;
//		}
		k = (i % 2 != 0) ? i + 1: i;
		for(int g = n; g>k; g--)
		{
			cout<<" ";
		}
		for(int j = 0; j<k; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
