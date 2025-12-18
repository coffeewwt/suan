#include<iostream>
#include <string>

int main(){
    std::string a,b;
    std::cin>>a;
    b=a;
    a[0]=b[4];
    a[1]=b[3];
    a[2]=b[2];
    a[3]=b[1];
    a[4]=b[0];
    std::cout<<a;
    return 0;
}