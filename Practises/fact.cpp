#include<iostream>
using namespace std;
int main()
{   
    int num;
    cin>>num;

    int i=num,fact=1;
    
    if(i>0){
        fact=fact*i;
        cout<<fact;
        i--;
    }
    else{
        cout<<"Wrong Input!!";
    }
   return 0;
}