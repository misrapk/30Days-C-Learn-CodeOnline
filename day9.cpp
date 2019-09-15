#include<iostream>
using namespace std;

int calc(int n, int c, int b, int r, int re){
	
	int total = (n * 68) + (c * 75) + ( b * 43);
	int refund = (r*43) + re;
	int spent = total - refund;
	return spent;
	
}

int main(){
	int sweater = 3;
	int computer = 1;
	int bracelet = 2;
	int brReturn = 1;
	int game = 10;
	int total = calc(sweater, computer , bracelet, brReturn , game);
	cout<<total;
	return 0;
}
