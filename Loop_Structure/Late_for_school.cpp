#include<iostream>

#define INTIME 480
#define RUBBISH 10

int main(){
    int time=0;
    int s,v,walk,h,m;
    std::cin>>s>>v;
    walk=s/v;
    if(s%v){
        walk+=1;
    }
    time=INTIME-RUBBISH-walk;
    time=time%(24*60);
    if(time<0){
        time=24*60+time;
    }
    h=time/60;
    m=time%60;
    if(h<10&&m<10){
        std::cout<<0<<h<<':'<<0<<m<<std::endl;
    }
    else if(h<10&&m>10){
        std::cout<<0<<h<<':'<<m<<std::endl;
    }
    else if(h>10&&m<10){
        std::cout<<h<<':'<<0<<m<<std::endl;
    }
    else{
        std::cout<<h<<':'<<m<<std::endl;
    }
    return 0;
}