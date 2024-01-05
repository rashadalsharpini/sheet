#include <iostream>
using namespace std;
int main()
{
    int table, result;
    cin >> table;
    for (int go = 1; go <= 12; go += 1)
    {
        result = go * table;
        cout << table << " * " << go << " = " << result << endl;
    }
}