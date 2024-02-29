#include<iostream>
using namespace std;
void checkEvenorOdd(int n){
    if(n%2==0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}
int main()
{
    checkEvenorOdd(23);
   return 0;
}