#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar, q;
    cin >> ar >> q;
    long long arr[ar];
    for (int i = 0; i < ar; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + ar);
    while (q--)
    {
        int search;
        cin >> search;
        if(binary_search(arr, arr + ar, search)){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}