#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int arr[ar];
    int mini = INT_MAX;
    int maxi = 0;
    int placemini,placemax;
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < ar; j++)
    {
        for (int i = 0; i < ar; i++)
        {
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
    }
    for (int i = 0; i < ar; i++)
    {
        if (mini==arr[i])
        {
            placemini=i;
        }
        if (maxi==arr[i])
        {
            placemax=i;
        }
    }
    arr[placemax]=mini;
    arr[placemini]=maxi;
    for (int i = 0; i < ar; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}