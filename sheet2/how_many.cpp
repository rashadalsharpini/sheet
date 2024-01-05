#include <iostream>
using namespace std;
int main()
{
    //still need work
    int numele;
    cin >> numele;
    long long even=0, odd=0, postive=0, negtive=0;
    int i=1;
    while(numele>=i){
        int test;
        cin >> test;
        if (test > 0)
        {
            postive++;
        }
        else if (test < 0)
        {
            negtive++;
        }
        if (test % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << postive << endl;
    cout << "Negative: " << negtive << endl;
}