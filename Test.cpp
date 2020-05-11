//
// Created by zfy on 2019/6/6.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define f(x) (x*x)
#define d(x) x*x

/*
double Line(int n){
    double i;
    i = 1+1/(double) n;
    cout<<"i = "<<i<<endl;
    double result = pow(i,n);
    return result;
}
 */

int main(){
    int i1,i2,i3,i4;
    i1 = f(8)/f(4);
    i2 = f(4+4)/f(2+2);
    i3 = d(8)/d(4);
    i4 = d(4+4)/d(2+2);
    cout<<i1<<" "<<i2<<endl;
    cout<<i3<<" "<<i4<<endl;
}