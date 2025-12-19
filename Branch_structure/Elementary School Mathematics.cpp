#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        int n=10,a=2,c=4;
        cout<<a+c<<' '<<n-a-c<<endl;
    } else if (T == 3) {
        int a=14/4;
        cout<<a<<endl;
        cout<<a*4<<endl;
        cout<<14-a*4<<endl;
    } else if (T == 4) {
        float v=500,a;
        int n=3;
        a=v/3;
        cout<<setprecision(6)<<a<<endl;
    } else if (T == 5) {
        int l1=260,l2=220,v1=12,v2=20;
        cout<<(l1+l2)/(v1+v2)<<endl;
    } else if (T == 6) {
        cout<<sqrt(6*6+9*9)<<endl;
    } else if (T == 7) {
        cout<<110<<endl<<90<<endl<<0<<endl;
    } else if (T == 8) {
       int r=5;
        double pi=3.141593;
        cout<<2*pi*r<<endl;
        cout<<r*r*pi<<endl;
        cout<<4.0/3*pi*r*r*r<<endl;
    } else if (T == 9) {
        cout<<(((1+1)*2+1)*2+1)*2<<endl;
    } else if (T == 10) {
        cout<<9<<endl;
    } else if (T == 11) {
        cout<<100.0/(8-5)<<endl;
    } else if (T == 12) {
        cout<<'M'-'A'+1<<endl;
        cout<<char('A'-1+18)<<endl;
    } else if (T == 13) {
        int r1=4,r2=10;
        double pi=3.141593;
        double v=4.0/3*pi*r1*r1*r1+4.0/3*pi*r2*r2*r2;
        v=pow(v,1.0/3);  
        printf("%.0lf\n",v);  
    } else if (T == 14) {
        cout<<50<<endl;
    }
    return 0;
}