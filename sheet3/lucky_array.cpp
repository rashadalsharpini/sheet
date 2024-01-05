#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ar, count = 0;
    cin >> ar;
    int arr[ar];
    /*fill array*/
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
        // m = min(m, arr[i]);
    }
    int m=arr[0];
    for (int j = 0; j < ar; j++)
    {
        if (m==arr[j])
        {
            count++;
        }
        if (m>arr[j])
        {
            m=arr[j];
            count=1;
        }
        
    }
    if (count%2==0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }
    return 0;
}