#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count = 0;
    int t=1;
    for (int i = 1; i <= x; i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<t<<" ";
            t++;
        }
        cout<<"PUM"<<endl;
        t++;
    }
}