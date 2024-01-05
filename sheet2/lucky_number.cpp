#include <iostream>
using namespace std;
int main()
{
    int num, num1, next = 0, divide, total = 0;
    bool shit = false, stop = true;
    cin >> num >> num1;
    for (int i = num; i <= num1; i++)
    {
        divide = i;
        total = i;
        while (divide > 0)
        {
            next = divide % 10;
            divide /= 10;
            if (next == 7 || next == 4)
            {
                shit = true;
                if (divide == 0)
                {
                    stop = false;
                    cout << total << " ";
                }
            }
            else
            {
                shit = false;
                break;
            }
        }
    }
    if (shit == false && stop == true)
    {
        cout << -1;
    }
    return 0;
}