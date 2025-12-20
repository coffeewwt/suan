#include<iostream>
#include <algorithm>

#define MAX 200

using namespace std;

int main(){
    int n;
    cin>>n;

    int sum[MAX]={0};
    int fact[MAX]={1};
    int len_sum = 1, len_fact = 1; 
    
    for(int i=1;i<=n;i++){
        int carry=0;
        for(int j=0;j<len_fact;j++){
            int a=fact[j]*i+carry;
            carry=a/10;
            fact[j]=a%10;
        }
        while(carry>0){
            fact[len_fact++]=carry%10;
            carry/=10;
        }
        carry=0;
        len_sum = max(len_sum, len_fact);
        for(int j=0;j<len_sum;j++){
            int a=sum[j]+(j < len_fact ? fact[j] : 0) + carry;
            carry=a/10;
            sum[j]=a%10;
        }
        if (carry > 0){
            sum[len_sum++] = carry;
        }
    }
    for (int i=len_sum-1;i>=0;--i) cout << sum[i];
    return 0;
}