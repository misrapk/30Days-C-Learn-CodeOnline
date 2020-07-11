//day 21
//find the hour and minute angle

#include<bits/stdc++.h>
using namespace std;

int min (int x , int y){
    return (x<y) ? x:y;
}
int calcAngle(double h, double m){
    if(h < 0 || m < 0 || h >12 || m>60){
        cout<<"wrong Input!";
    }

    if(h == 0) h = 0;
    if (m == 0) m =0;

    int hr_angle = 0.5 * (h * 60 + m);
    int min_angle = 6 * m;
    int angle = abs(hr_angle - min_angle);
    angle = min(360 - angle, angle);

    return angle;
}

int main(){
    int hr, min;
    cout<<"Enter hour(1-12): ";
    cin>>hr;
    cout<<"Enter minute(0-59): ";
    cin>>min;
    int clockAngle = calcAngle(hr, min);
    if(clockAngle==0){
        cout<<"Hour and Minute hands overlaps!";
    }else{
        cout<<"Clock Angle is : "<<clockAngle<<" degree.";
    }

    cout<<"THATS IT"<<endl;

    return 0;
}