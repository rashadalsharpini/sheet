#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            cout << " ";
        }
        for (int x = 0; x < 2 * i - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}