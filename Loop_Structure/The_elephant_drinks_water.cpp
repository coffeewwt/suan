#include<iostream>
#include<cmath>
#include<iomanip>

#define WATER 20*1000
#define pi 3.14

int main(){
    int h,r;
    double V,n;
    std::cin>>h>>r;
    V=pi*r*r*h;
    n=WATER/V;
    n=ceil(n);
    std::cout<<std::fixed<<std::setprecision(0)<<n<<std::endl;
    return 0;
}