#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){

        if(i%2==0){
			continue;
		}

        int x=0;
        int y=i;

        while(y!=0){
            x=y%10+x*10;
            y/=10;
        }
        if(x!=i){
			continue;
		}

        int flag=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}