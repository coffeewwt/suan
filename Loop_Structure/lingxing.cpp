#include<iostream>

int main(){
    for(int i=0;i<=4;i++){
        char a[5];
        for(int b=0;b<=4;b++){
            a[b]=' ';
        }
        for(int j=0;j<=i;j++){
            if(i==3&&j>=2||i==4&&j>=1){
                break;
            }
            a[2+j]='*';
            a[2-j]='*';
        }
        for(int k=0;k<=4;k++){
            std::cout<<a[k];
        }
        std::cout<<std::endl;
    }
    return 0;
}