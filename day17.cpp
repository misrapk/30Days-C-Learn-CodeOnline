#include<iostream>
using namespace std;

int main(){
	int  length, count=0;
	cout<<"Enter the strength of class: ";
	cin>>length;
	string name[length];

	cout<<"Enter "<< length<<" students name: ";
	for(int i =0 ;i < length; i++){
		cin>>name[i];
	}
	
	
	for(int i =0; i< length; i++){
		for(int j =i + 1; j< length; j++){
			if (name[i] == name[j]){
				cout<<name[i];
				count++;
			}
			
		}
		
	}
	if(count ==0){
		cout<<"Every student has distinct name!\n";
	}
	return 0;
	
}
