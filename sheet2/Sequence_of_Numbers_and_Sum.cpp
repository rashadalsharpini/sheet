#include <iostream>
using namespace std;
int main()
{
    int n, m, x;
    // int count = 0;
    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            return 0;
        }
        else
        {
            if (m > n)
            {
                x = m;
                m = n;
                n = x;
            }
            long sum = 0;
            while (m <= n)
            {
                cout << m << " ";
                sum += m;
                m++;
            }
            cout << "sum =" << sum << endl;
            sum = 0;
            // count++;
        }
    }
    return 0;
}