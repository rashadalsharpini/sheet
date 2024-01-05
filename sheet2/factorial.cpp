#include <iostream>
using namespace std;
int main()
{
    long long num, fac = 1, case1;
    cin >> case1;
    while (1 <= case1)
    {
        cin >> num;
        for (int i = 1; i <= num; i++)
        {
            fac = fac * i;
        }
        cout << fac<<endl;
        fac=1;
        case1--;
    }
 
   
}