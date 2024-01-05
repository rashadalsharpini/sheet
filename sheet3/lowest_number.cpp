#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int arr[ar];
    int m = INT_MAX;
    /*fill array*/
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
        m = min(m, arr[i]);
    }
    for (int i = 0; i < ar; i++)
    {
        if (arr[i] == m)
        {
            cout << arr[i] << " " << i+1;
            break;
        }
    }
 
    return 0;
}