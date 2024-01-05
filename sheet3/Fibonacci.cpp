#include <iostream>
using namespace std;
int main()
{
    long long ar;
    cin >> ar;
    long long arr[ar];
    arr[0] = 0;
    arr[1] = 1;
    for (size_t i = 0; i < ar; i++)
    {
        arr[i + 2] = arr[i] + arr[i + 1];
    }
    cout << arr[ar - 1];
    return 0;
}