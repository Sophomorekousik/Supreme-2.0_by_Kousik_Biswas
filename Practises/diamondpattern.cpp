#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int n=num/2;

    for(int row=0;row<n;row=row+1){
        //space
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        for(int col=0;col<row+1;col=col+1){
            cout<<"* ";
        }
        //star
        cout<<endl;
    }
     for(int row=0;row<n;row=row+1){
        //spaces
        for(int col=0;col<row;col=col+1){
            cout<<" ";
        }
        for(int col=0;col<n-row;col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
   return 0;
}