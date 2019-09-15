//money earned by kara and rani

#include<iostream>
using namespace std;

int main(){
	int k, r, diff;
	// kara = 5 cents a glass
	// Rani = 7 cents a glass
	cout<<"Enter the number of glass sold by Kara: ";
	cin>>k;
	cout<<"Enter the number of glass sold by Rani: ";
	cin>>r;
	
	int kPrice = 5 * k;
	int rPrice = 7 * r;
	
	if(kPrice > rPrice){
		diff = kPrice - rPrice;
		cout<<"Kara made the most money by "<<diff<<" cents than Rani\n";
	}
	else if(kPrice == rPrice){
		cout<<"Both have earned equal money.\n";
	}
	else{
		diff = rPrice - kPrice;
		cout<<"Rani made the most money by "<<diff<<" cents than Kara.\n";
	}
	
	getchar();
	return 0;
		 
}
