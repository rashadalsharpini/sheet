#include <iostream>
using namespace std;
int main()
{
    int cases, result, min;
    bool shit = true;
    cin >> cases;
    while (cases--)
    {
        /*fill array*/
        int ar;
        cin >> ar;
        int arr[ar];
        for (int i = 0; i < ar; i++)
        {
            cin >> arr[i];
        }
        for (int z = 1; z <= ar; z++)
        {
            for (int x = z + 1; x <= ar; x++)
            {
                result = (arr[z - 1] + arr[x - 1]) + (x - z);
                if (shit)
                {
                    min = result;
                    shit = false;
                }
                if (min > result && shit == false)
                {
                    min = result;
                }
                result = 0;
            }
        }
        shit = true;
        cout << min << endl;
    }
    return 0;
}