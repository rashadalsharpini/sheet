#include <iostream>
using namespace std;
int main()
{
    int ar, ar1;
    cin >> ar;
    int arr[ar];
    cin >> ar1;
    int arr1[ar1];
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < ar1; i++)
    {
        cin >> arr1[i];
    }
    int z=0,count=0;
    for (int i = 0; i < ar; i++)
    {
        if (arr[i]==arr1[z])
        {
            count++;
            z++;
        }
    }
    if (count==ar1)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}