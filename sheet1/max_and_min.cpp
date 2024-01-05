#include<iostream>
using namespace std;
int main()
{
    long long max1,min1,a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        max1=a;
        min1=b;
    }
    else{
        max1=b;
        min1=a;
    }
    if(max1>c){
        
    }
    else{
        max1=c;
    }
    if(c<min1){
        min1=c;
    }
    
    cout<<min1<<" ";
    cout<<max1;
}