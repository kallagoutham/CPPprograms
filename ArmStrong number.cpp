#include<bits/stdc++.h>
#include <iostream>

using namespace std;
bool isArmstrong(int num,int n){
    int arm=0;
    int temp=num;
    while(num>0){
        arm=arm+pow(num%10,n);
        num/=10;
    }
    return arm==temp;
}
int countdigits(int num){
    int c=0;
    while(num>0){
        num/=10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    int flag=isArmstrong(n,countdigits(n))?1:0;
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
