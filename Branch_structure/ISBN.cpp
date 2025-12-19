#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int n=0,x,sum=1;
    int b[10];
    char c;
    cin>>a;
    for(int i=0;i<=11;i++){
        if(a[i]!='-'){
            b[i]=a[i]-'0';
            n+=b[i]*sum;
            sum++;
        }
    }    
    x=n%11;
    if(x==10){
        c='X';
    }
    else{
        c=x+'0';
    }
    if(c==a[12]){
        cout<<"Right"<<endl;
    }
    else{
        a[12]=c;
        cout<<a<<endl;
    }
    return 0;
}