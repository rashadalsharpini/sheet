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
        int count = 0;
        for (int i = 0; i < ar; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < ar; j++)
        {
            count++;
            for (int x = j + 1; x < ar; x++)
            {
                if (arr[x] >= arr[x - 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}