#include<iostream>
using namespace std;
void SumUpto1toN(int n){
    int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"Final sum is :"<<sum<<endl;
}
int main()
{   
    SumUpto1toN(10);
   return 0;
}