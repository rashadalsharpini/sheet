#include <iostream>
using namespace std;
int main()
{
    int ar;
    cin >> ar;
    int arr[ar];
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    bool shit = false;
    int count = 0;
    while (true)
    {
        for (int i = 0; i < ar; i++)
        {
            if (arr[i] % 2 != 0)
            {
                shit = false;
                break;
            }
            if (arr[i] % 2 == 0)
            {
                shit = true;
            }
        }
        if (shit == true)
        {
            for (int j = 0; j < ar; j++)
            {
                arr[j] = arr[j] / 2;
            }
            count++;
        }else{break;}
    }
    cout<<count;
}