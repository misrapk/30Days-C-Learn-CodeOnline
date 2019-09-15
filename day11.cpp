// day 11.... find number of hours


#include<iostream>
using namespace std;

//void mintohr(int a){
//	int hr = a / 60;
//	int min = a % 60;
//	
//	
//	
//}

int main(){
	int movie1 = 100; 
	
	
	
	
	
	
	int movie2 = 110;
	int h1, h2;
	h1 = movie1/60;
	h2 = movie2/60;
	int m1 = movie1 % 60;
	int m2 = movie2 % 60;
	int totalhr = h1 + h2;
	int totalmin = m1 + m2;
	
	if(totalmin > 60){
		totalhr++;
		totalmin = totalmin - 60;
		
	}
	
	cout<<"Total time to watch movie is : "<<totalhr<<"hrs and "<<totalmin;
	
	return 0;
}
