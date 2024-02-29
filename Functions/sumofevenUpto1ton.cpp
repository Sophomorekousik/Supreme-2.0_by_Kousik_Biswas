#include<iostream>
using namespace std;
void sumofEvenUpto1ton(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    cout<<"Finalsum is: "<<sum<<endl;
}
int main()
{   
    sumofEvenUpto1ton(50);
   return 0;
}