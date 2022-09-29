/* input: 88677222
    output:"28162732"
*/


#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int reverse(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
        return rev;
}
int main()
{
    int n;
    cin>>n;
    int c=1;
    string s="";
    int rev=reverse(n);
    int prev=rev%10;
    rev/=10;
    while(rev>0){
        int d=rev%10;
            if(prev==d){
                c++;
            }
            else{
                s+='0'+c;
                s+='0'+prev;
                prev=d;
                c=1;
            }
            rev/=10;
    }
    s+='0'+c;
    s+='0'+prev;
    cout<<s<<endl;
    
}
