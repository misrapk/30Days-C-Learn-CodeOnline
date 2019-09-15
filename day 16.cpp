//program to get the sum of n numbers
#include<iostream>
using namespace std;

int getsum(int n){
	int sum =0;
	while (n != 0){
		sum = sum + n% 10;
		n = n/10;
	}
	
	return sum;
}

int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	
	cout<<"The sum of alll the integer of the number is : "<<getsum(num)<<"\n";
	
	getchar();
	return 0;
	
}
