#include<iostream>
using namespace std;
int main()
{
    int lines ;
    cin>>lines;
    int space=lines-1;
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int x=1;x<(i*2);x++){
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
}