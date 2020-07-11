//find leap year
#include<bits/stdc++.h>
using namespace std;

void leap(int year){
    if (year % 400 == 0){
        cout<<"Leap Year";
    }else if(year %4 ==0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Normal Year";
    }

}

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    leap(year);

    return 0;
}