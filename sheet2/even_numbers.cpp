#include<iostream>
using namespace std;
int main()
{
    bool shit=false;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(i%2==0){
            cout<<i<<endl;
            shit=true;
        }
    }
    if(shit==false){
        cout<<-1;
    }
}