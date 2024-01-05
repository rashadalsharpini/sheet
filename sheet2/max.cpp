#include<iostream>
using namespace std;
int main()
{
    int n,loop,max1=0;
    cin>>loop;
    for(int i=1;i<=loop;i++){
        cin>>n;
        if(n>max1){
            max1=n;
        }
    }
    cout<<max1;
}