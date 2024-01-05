#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    
    while (x >= 1)
    {
        int i = x;
        while (i >= 1)
        {
            cout << '*';
            i--;
        }
        cout << endl;
        x--;
    }
}