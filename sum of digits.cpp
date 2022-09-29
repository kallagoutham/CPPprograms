#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int sumofdigits(int num){
    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofdigits(n)<<endl;
    return 0;
}
