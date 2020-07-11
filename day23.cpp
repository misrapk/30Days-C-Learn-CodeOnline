//convert int value into binary
#include<bits/stdc++.h>
using namespace std;

void binary(int n){
    int i =0;
    int binaryNum[32];
    while(n>0){
        binaryNum[i] =n %2;
        n /= 2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        cout<<binaryNum[j];
    }

}
int main(){
    int n;
    cout<<"Enter the integer num: ";
    cin>>n;
    // binary(n);
    cout<<"Binary is : ";
    binary(n);

    return 0;

}