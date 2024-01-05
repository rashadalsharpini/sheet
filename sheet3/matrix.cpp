#include<iostream>
using namespace std;
int main()
{
    long long n;cin>>n;
    int n1=n-1;
    long long arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    long long sum=0,sum1=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i][i];
        sum1+=arr[i][n1--];
    }
    cout<<abs(sum-sum1)<<endl;
    return 0;
}