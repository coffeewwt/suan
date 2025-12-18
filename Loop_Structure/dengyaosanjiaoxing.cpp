#include<iostream>

int main(){
    char c='*';
    char a[5];
    for(int i=0;i<=4;i++){
        a[i]=' ';
    }
    std::cin>>c;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=i;j++){
            a[2+j]=c;
            a[2-j]=c;
        }
        for(int k=0;k<=4;k++){
            std::cout<<a[k];
        }
        std::cout<<std::endl;
    }
    return 0;
}