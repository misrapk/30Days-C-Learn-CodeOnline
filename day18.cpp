//find largest without loop and conditional statement


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int lengthOfFish[] = {12, 13, 8, 10, 17};
	int arrayLength = sizeof(lengthOfFish)/ sizeof(lengthOfFish[0]);
	sort(lengthOfFish, lengthOfFish+arrayLength);
	int largestSize = lengthOfFish[0];
	cout<<largestSize;

	return 0;
}

