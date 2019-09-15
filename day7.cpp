#include<iostream>
using namespace std;

//solution 1
//int main(){
//	int people =0;
//	for (int i =0; i<365; i++){
//		people += 120000;
//	}
//	
//	cout<<"Total people in 1 year is : "<<people;
//	
//	return 0;
//}

//solution 2
int people(int x, int y){
	if (y ==0)
	return 0;
	
	if (y>0)
	return (x + people(x,y-1));
	
	if (y<0)
	return -people(x,-y);
}
int main(){
	int peoplePerDay = 120000;
	int DaysPerYear = -365;
	int perYear = people(peoplePerDay, DaysPerYear);
	
	cout<<perYear;
	
	return 0;
}
