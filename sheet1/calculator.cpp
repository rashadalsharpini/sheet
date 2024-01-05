#include<iostream>
using namespace std;
int main()
{
    int x,y;
    char a;
    cin>>x>>a>>y;
    if(a=='+'){
        cout<<x+y<<endl;
    }
    else if(a=='-'){
        cout<<x-y<<endl;
    }
    else if(a=='*'){
        cout<<x*y<<endl;
    }
    else if (a=='/'){
        cout<<x/y<<endl;
    }
    return 0;
}