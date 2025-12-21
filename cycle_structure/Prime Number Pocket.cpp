#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int L;
    cin>>L;
    int n=2,sum=0,len=0;
    int s[10000]={0};
    for(int i=2;sum<L;i++){
        int flag=1;
        for(int j=i-1;j>=sqrt(i);j--){
            if((i%j)==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
        s[len]=i;
        sum+=s[len];
        if(sum>L){
            sum-=s[len];
            break;
        }
        len++;
        }
    }
    for(int i=0;i<len;i++){
        cout<<s[i]<<endl;
    }
    cout<<len<<endl;
    return 0;
}