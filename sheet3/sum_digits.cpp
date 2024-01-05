#include <iostream>
using namespace std;
int main()
{
    int ar;
    string n;
    cin >> ar;
    int arr[ar];
    cin >> n;
    /*fill array*/
    long long sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum+=n[i]-'0';
    }
    cout << sum << endl;
    return 0;
}