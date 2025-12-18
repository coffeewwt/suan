#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
    double a,b,c,p,S;
    std::cin>>a>>b>>c;
    p=0.5*(a+b+c);
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout<<std::fixed<<std::setprecision(1)<<S<<std::endl;
    return 0;
}