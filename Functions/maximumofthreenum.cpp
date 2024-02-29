#include<iostream>
using namespace std;
void printMaximum(int num1,int num2,int num3){
    int ans1=max(num1,num2);
    int finalans=max(ans1,num3);
    cout<<"Final Answer is : "<<finalans<<endl;
}
int main()
{   
    printMaximum(100,200,231);
   return 0;
}