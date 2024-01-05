#include<iostream>
using namespace std;
int main()
{
    char a;
    int x,y;
    cin>>x>>a>>y;
    if(a=='>')
    {
        if(x>y)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(a=='<')
    {
        if(x<y)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(a=='=')
    {
        if(x==y)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
}