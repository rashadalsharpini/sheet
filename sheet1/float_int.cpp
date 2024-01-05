#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double intnumber, fractnumber;
    double x;
    cin >> x;
    fractnumber = modf(x, &intnumber);
    if(fractnumber==0){
        cout<<"int "<<intnumber;
    }
    else{
        cout<<"float "<<intnumber<<" "<<fractnumber;
    }
}