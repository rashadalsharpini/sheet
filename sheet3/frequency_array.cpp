#include <iostream>
using namespace std;
int main()
{
    int ar, m;
    cin >> ar >> m;
    int arr[ar];
    int arr1[m + 1] = {};
    for ( int i = 0; i < ar; i++)
    {
        cin >> arr[i];
        int x = arr[i];
        arr1[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}