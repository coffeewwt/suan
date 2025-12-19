#include<iostream>
#include<iomanip>

int main(){
    double a,b,c,g;
    std::cin>>a>>b>>c;
    g=a*0.2+b*0.3+c*0.5;
    std::cout<<std::fixed<<std::setprecision(0)<<g<<std::endl;
    return 0;
}