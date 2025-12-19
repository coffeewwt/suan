#include<iostream>

int main(){
    int a,b,c,d,e,f,t1,t2,t;
    std::cin>>a>>b>>c>>d;
    t1=a*60+b;
    t2=c*60+d;
    t=t2-t1;
    if(t<0){
        t=60*24+t;
    }
    t1=t/60;
    t2=t%60;
    std::cout<<t1<<' '<<t2<<std::endl;
    return 0;
}