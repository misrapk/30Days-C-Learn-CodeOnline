// square of number without using multipliacation and division

#include<iostream>
using namespace std;

int main(){
	int num;
	int square =0;
	cout<<"Enter the number to find square: ";
	cin>>num;
	
	for(int i =1; i<=num; i++){
		square = square + num;
	}
	cout<<"Square of number is : "<< square<<"\n";
	
	
}
