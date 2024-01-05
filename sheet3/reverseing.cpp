#include<iostream>
using namespace std;
int main()
{
    int ar;
    cin>>ar;
    int arr[ar];
    /*fill array*/
    for (int i = 0; i < ar; i++)
    {
        cin>>arr[i];
    }
    /*display the reverse*/
    int z=ar;
    while (z!=0)
    {
        cout<<arr[z-1]<<" ";
        z--;
    }
}