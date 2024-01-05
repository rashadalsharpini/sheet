#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int max12, mid12, mini12;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        max12 = a;
        if (b > c)
        {
            mid12 = b;
            mini12 = c;
        }
        else
        {
            mid12 = c;
            mini12 = b;
        }
    }
    else if (b >= a && b >= c)
    {
        max12 = b;
        if (a > c)
        {
            mid12 = a;
            mini12 = c;
        }
        else
        {
            mid12 = c;
            mini12 = a;
        }
    }
    else if (c >= a && c >= b)
    {
        max12 = c;
        if (a > b)
        {
            mid12 = a;
            mini12 = b;
        }
        else
        {
            mid12 = b;
            mini12 = a;
        }
    }
    cout << mini12 << endl
         << mid12 << endl
         << max12 << endl
         << endl;
    cout << a << endl
         << b << endl
         << c << endl;
}