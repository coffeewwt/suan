#include<iostream>

#define PRICE 19

int main(){
    int a,b,m,n;
    std::cin>>a>>b;
    m=a*10+b;
    n=m/PRICE;
    std::cout<<n<<std::endl;
    return 0;
}