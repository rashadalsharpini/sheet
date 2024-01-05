#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int arr1[ar], arr2[ar];
    for (int i = 0; i < ar; i++)
    {
        cin >> arr1[i];
    }
    sort(arr1, arr1 + ar);
    for (int i = 0; i < ar; i++)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2 + ar);
    bool shit = false;
    for (int i = 0; i < ar; i++)
    {
        if (arr1[i] == arr2[i])
        {
            shit = true;
        }
        else
        {
            shit = false;
            break;
        }
    }
    if (shit == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}