#include<iostream>
#include<algorithm>

int main(){
    int p[3];
    int a,b,c;
    char d,e,f;
    std::cin>>a>>b>>c;
    std::cin>>d>>e>>f;
    p[0]=std::min(a,std::min(b,c));
    p[2]=std::max(a,std::max(b,c));
    int x=std::max(a,b),y=std::max(a,c),z=std::max(b,c);
    if(x==y) p[1]=z;
    if(x==z) p[1]=y;
    if(y==z) p[1]=x;//核心部分，处理中间的数
    std::cout<<p[d-65]<<" "<<p[e-65]<<" "<<p[f-65]<<std::endl;//输出
    return 0;
}