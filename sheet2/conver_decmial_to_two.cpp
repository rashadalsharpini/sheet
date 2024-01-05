#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        long long sum = 0;
        int test;
        cin >> test;
        while (test > 0)
        {
            if (test % 2 == 1)
            {
                count++;
            }
            test /= 2;
        }
        for (int j = 0; j < count; j++)
        {
            sum += pow(2, j);
        }
        cout << sum << endl;
    }
    return 0;
}