#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double a,b,c,d;
    long double res1,res2;
    cin>>a>>b>>c>>d;
    // res1=pow(a,b);res2=pow(c,d);
    res1=b*log(a);
    res2=d*log(c);
    if(res1>res2){
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
        return 0;
    }
    if(a==c){
        if(b>d){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }
    if(b==d){
        if(a>c){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        return 0;
    }
}