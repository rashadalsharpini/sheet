#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int ar;
        cin >> ar;
        int arr[ar];
        for (int i = 0; i < ar; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < ar; j++)
        {
            cout << arr[j] << " ";
        }
        for (int x = 0; x < ar; x++)
        {
            int maxi = arr[x];
            for (int j = x + 1; j < ar; j++)
            {
                maxi = max(maxi, arr[j]);
                cout << maxi << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}