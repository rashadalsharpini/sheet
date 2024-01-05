#include <iostream>
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
    /*sort*/
    for (int j = 0; j < ar; j++)
    {
        for (int i = 0; i < ar; i++)
        {
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
        
    }
    /*display*/
    for (int j = 0; j < ar; j++)
    {
        cout<<arr[j]<<" ";
    }
}