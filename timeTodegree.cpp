#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int h=3;
    int min=15;

    if(h>=12)
    {
        h=h-12;
    }

    float hangle=(h*30)+(h*0.5);
    float minangle=min*6;

    float degree=abs(hangle-minangle);

    if(degree>180)
    {
        degree=360-degree;
    }
    cout<<degree;
}