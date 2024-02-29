#include<iostream>
using namespace std;
 int main(){

    float a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    int op;
    cout<<"Enter the operation you want to perform:"<<endl;
    cout<<"1.Addition\n2.Subtraction\n3.Multipication\n4.Dividation"<<endl;
    cin>>op;
    float ans;
    //op-->1-add,2-->sub,3-->mul,4-->divide

    switch(op){
        case 1:
            cout<<"Addition is :"<<endl;
            ans=a+b;
        break;
        case 2:
            cout<<"Subtraction is :"<<endl;
            ans=a-b;
        break;
        case 3:
            cout<<"Multipication is :"<<endl;
            ans=a*b;
        break;
        case 4:
            cout<<"Dividation is :"<<endl;
            ans=a/b;
        break;
        default:
                cout<<"Invalid Input!!!"<<endl;
                return 0;
    }
    cout<<"Your answer is :"<<ans<<endl;
 }