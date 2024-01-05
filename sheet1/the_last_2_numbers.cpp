#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int num1=a%100;
    int num2=b%100;
    int num3=c%100;
    int num4=d%100;
    int result=num1*num2*num3*num4;
    if(result%100<=9){
        cout<<"0"<<result%100<<endl;
    }
    else{
        cout<<result%100<<endl;
    }
}