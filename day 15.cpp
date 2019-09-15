#include<iostream>
using namespace std;

int main(){
	int wEarning, spent = 42;
	
	wEarning = (100*spent)/ 12;
	
	int saving = wEarning  - spent;
	cout<<wEarning<<"\n";
	
	cout<< "Lucilie deposit $"<<saving<<" into her saving account!\n";
	
	getchar();
	return 0;
	
	

}

