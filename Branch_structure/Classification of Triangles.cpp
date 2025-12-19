#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]+a[1] <= a[2] || a[1]+a[2] <= a[0] || a[2]+a[0] <= a[1]){
        cout<<"Not triangle"<<endl;
        return 0;
    }
    if(a[2]*a[2] == a[0]*a[0]+a[1]*a[1]){
        cout<<"Right triangle"<<endl;
    }
    if(a[2]*a[2] < a[0]*a[0]+a[1]*a[1]){
        cout<<"Acute triangle"<<endl;
    }
    if(a[2]*a[2] > a[0]*a[0]+a[1]*a[1]){
        cout<<"Obtuse triangle"<<endl;
    }
    if(a[0] == a[1] || a[1] == a[2] || a[2] == a[0]){
        cout<<"Isosceles triangle"<<endl;
    }
    if(a[0] == a[1] && a[1] == a[2] && a[2] == a[0]){
        cout<<"Equilateral triangle"<<endl;
    }
    return 0;
}