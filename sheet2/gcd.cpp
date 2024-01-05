#include <iostream>
using namespace std;
int main()
{
    int num, num1;
    int target;
    cin >> num >> num1;
    if (num1 > num)
    {
        int temp = num1;
        num1 = num;
        num = temp;
    }
    for (int i = 1; num >= i; i++)
    {
        if (num % i == 0 && num1 % i == 0)
        {
            target = i;
        }
    }
    cout <<target<<endl;
}