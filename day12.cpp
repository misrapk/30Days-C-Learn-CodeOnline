//Day 12 ..... Find ratio


#include<iostream>
using namespace std;

int greatestFactor(int a, int b){
//	cout<<a<< "and "<<b<<"\n";
	
	if (b ==0){
		return a;
	}
	else{
//		cout<<a%b<<"\n";
		greatestFactor(b, a % b);
		
	}
}

int main(){
	int redC = 50;
	int whiteC = 30;
	
	int factor = greatestFactor(whiteC, redC);
	cout<<factor<<"\n";
	
	int whiteR = whiteC / factor;
	int redR = redC / factor;
	
	cout<<"Ratio of blood cells: "<< whiteR << " : "<< redR;
	
	return 0;
}
