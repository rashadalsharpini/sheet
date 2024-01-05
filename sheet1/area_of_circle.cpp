#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(9);
    double area;
    double r;
    cin>>r;
    area=r*r*3.141592653;
    cout<<area;
    return 0;
}