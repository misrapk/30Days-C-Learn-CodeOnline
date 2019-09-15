//ram anuj deepak ravi
#include<bits/stdc++.h>
using namespace std;

void printAll(string arr[], int  n){
	for(int i =0 ;i< n; i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;

}

void allCombinations(string arr[], int  n){
	
	sort(arr, arr+n);
	cout<<"Possible combinations are: \n";
	
	do{
		printAll(arr,n);
	} while(next_permutation(arr, arr+n));
}
	
int main(){
	string student[] = {"Ram","Ajay", " Deepak","Ravi"};
	int n = sizeof(student)/sizeof(student[0]);
	allCombinations(student, n);
	
	getchar();
	return 0;
}

