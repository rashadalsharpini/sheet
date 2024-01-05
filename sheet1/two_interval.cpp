#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    int start, end;
    cin >> num1 >> num2 >> num3 >> num4;
    if ((num3 < num1 && num4 < num1)||(num3 > num2 && num4 > num2))
        {
            cout << -1;
        }
    else
    {
        if (num1 > num3)
        {
            start = num1;
        }
        else
        {
            start = num3;
        }
        if (num2 > num4)
        {
            end = num4;
        }
        else
        {
            end = num2;
        }
        cout << start << " " << end;
    } 
}