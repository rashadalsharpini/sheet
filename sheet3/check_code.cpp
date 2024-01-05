#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ar = a + b + 1;
    string s;
    cin >> s;
    if (s[a] != '-')
    {
        cout << "No";
        return 0;
    }
    // int len = s.length();
    // bool shit = false;
    for (int i = 0; i < ar; i++)
    {
        if ((s[i] < '0' || s[i] > '9') && i != a)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}