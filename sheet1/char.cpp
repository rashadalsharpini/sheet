#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cin>>alpha;
    int asc =alpha;
    if(asc>=65 && asc<=90){
        // cout<<"ALPHA"<<endl<<"IS CAPITAL";
        asc=asc+32;
        alpha=asc;
        cout<<alpha;
    }
    else if(asc>=97 && asc<=122){
        // cout<<"ALPHA"<<endl<<"IS SMALL";
        asc=asc-32;
        alpha=asc;
        cout<<alpha;
    }
    return 0;
}