#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cin>>alpha;
    int asc =alpha;
    if(asc>=48 && asc<=57){
        cout<<"IS DIGIT";
    }
    else if(asc>=65 && asc<=90){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(asc>=97 && asc<=122){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}