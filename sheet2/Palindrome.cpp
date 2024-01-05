#include<iostream>
using namespace std;
int main()
{
    int num,r=0,num2;
    cin>>num;
    num2=num;
    while (num!=0){
        r=r*10+num%10;
        num=num/10;
    }
    cout<<r<<endl;
    if (num2==r){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}