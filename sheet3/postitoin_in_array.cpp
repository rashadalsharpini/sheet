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
    for (int i = 0; i < ar; i++)
    {
        if(arr[i]<=10){
            cout<<"A["<<i<<"] = "<<arr[i];
            cout<<endl;
        }
    }
    
}