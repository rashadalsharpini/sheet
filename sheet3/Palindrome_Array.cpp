#include <iostream>
using namespace std;
int main()
{
    long long ar;
    cin >> ar;
    long long arr[ar];
    /*fill array*/
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < ar / 2; i++)
    {
        if (arr[i] != arr[ar - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}