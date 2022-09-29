#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int reverse(int num){
    int rev=0;
    if(num>0){
        while(num>0){
            rev=rev *10+num%10;
            num/=10;
        }
        return rev;
    }
    else{
        num*=-1;
        while(num>0){
            rev=rev *10+num%10;
            num/=10;
        }
        return rev*-1;
    }
}
int main()
{
    int n1;
    cin>>n1;
    cout<<reverse(n1)<<endl;
    return 0;
}
