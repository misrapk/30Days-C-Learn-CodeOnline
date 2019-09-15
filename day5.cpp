#include<iostream>
using namespace std;
//bubble sort

int main()
{
	int track[] = {66, 57, 53,64, 52, 59};
	int len = sizeof(track)/sizeof(int);
	
	//TODO: Bubble Sort
	for (int i = 0; i< len; i++)
	{
		for(int j = i + 1; j<len; j++)
		{
			if(track[i] > track[j])
			{
				int temp = track[i];
				track[i] = track[j];
				track[j] = temp;
			}
		}
	}
	cout<<"The best time is : "<<track[len-1];
	

	
	return 0;
}
