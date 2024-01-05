#include <iostream>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int arr[ar];
    /*fill array*/
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    int search;
    cin >> search;
    bool shit = false;
    for (int i = 0; i < ar; i++)
    {
        if (arr[i] == search)
        {
            cout << i;
            shit = true;
            break;
        }
    }
    if (shit == false)
    {
        cout << -1;
    }
}