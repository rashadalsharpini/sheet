#include <iostream>
using namespace std;
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x >> y;
    x = x - 1;
    y = y - 1;
    if (arr[x - 1][y - 1] != '.' && arr[x - 1][y] != '.'
     && arr[x - 1][y + 1] != '.' && arr[x][y - 1] != '.' 
     && arr[x][y + 1] != '.' && arr[x + 1][y - 1] != '.'
     && arr[x + 1][y] != '.' && arr[x + 1][y + 1] != '.')
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}