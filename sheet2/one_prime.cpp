#include <iostream>
using namespace std;
int main()
{
    long long number;
    cin >> number;
    bool check = false;
    for (int j = 2; j < number; j++)
    {
        if (number % j == 0)
            check = true;
    }
    if (check == true)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}