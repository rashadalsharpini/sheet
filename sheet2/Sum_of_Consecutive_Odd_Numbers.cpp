#include <iostream>
using namespace std;
int main()
{
    int count;
    int x, y, sum = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> x >> y;
        if (y > x)
        {
            swap(x, y);
        }
        for (int i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}