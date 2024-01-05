#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;x>i;i++)
    {
        string number;
        cin>>number;
        int size=number.size();
        // for(int j=0;j<size;j++){
        //     cout<<
        // }
        for(int z=size-1;z>=0;z--){
            cout<<number[z]<<" ";
        }
        cout<<endl;
    }
}