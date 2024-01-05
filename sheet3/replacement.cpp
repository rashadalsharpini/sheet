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
    for (int j = 0; j < ar; j++)
    {
        if (arr[j]>0)
        {
            arr[j]=1;
        }
        else if (arr[j]<0)
        {
            arr[j]=2;
        }
    }
    /*display*/
    for (int i = 0; i < ar; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}