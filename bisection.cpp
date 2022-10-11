#include<iostream>
#include<math.h>
using namespace std;


double f(float x){
    return pow(x-3,2)-4;
}

int main(){
    int iterations=1;
    double a=0.5, b=2,mid;
    while(iterations!=11){
        cout<<"iteration#"<<iterations<<" a="<<a<<", b="<<b<<"\n";
        mid=(a+b)/2;
        if(f(mid)*f(a)<0) b=mid;
        else if(f(mid)*f(b)<0) a=mid;
        iterations++;
    }
    cout<<"the root of f(x)=(x-2)^2 - 4 in [0,2] is: "<<mid;
    return 0;
}