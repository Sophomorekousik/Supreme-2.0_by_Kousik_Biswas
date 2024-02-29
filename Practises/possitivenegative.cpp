#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n==0){
        cout<<"The number is equal to zero";
    }else if(n<0){
        cout<<"The number is negative";
    }else{
        cout<<"The number is possitive";
    }
   return 0;
}